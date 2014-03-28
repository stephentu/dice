#include "dice.hh"
#include "diceenum.hh"
#include "log2.hh"
#include "timer.hh"
#include "macros.hh"

#include <thread>
#include <mutex>
#include <condition_variable>
#include <unistd.h>
#include <tbb/concurrent_queue.h>
#include <tbb/concurrent_hash_map.h>

using namespace std;
using namespace dice;
using namespace tbb;

template <typename T>
class padded {
public:
  template <class... Args>
  padded(Args &&... args)
    : elem_(forward<Args>(args)...)
  { }

  T elem_;
  CACHE_PADOUT;

  // syntactic sugar- can treat like a pointer
  inline T & operator*() { return elem_; }
  inline const T & operator*() const { return elem_; }
  inline T * operator->() { return &elem_; }
  inline const T * operator->() const { return &elem_; }
};

struct work {
  enum class cmd : uint8_t { UPDATE, SLEEP, DIE };
  cmd c_;
  vector<dicestate> states_;
  static const unsigned batch_size = 1000;

  struct update_tag_t {};
  struct sleep_tag_t {};
  struct die_tag_t {};

  static const update_tag_t update_tag;
  static const sleep_tag_t sleep_tag;
  static const die_tag_t die_tag;

  work() {}

  work(update_tag_t, const vector<dicestate> &states)
    : c_(cmd::UPDATE), states_(states) {}
  work(update_tag_t, vector<dicestate> &&states)
    : c_(cmd::UPDATE), states_(move(states)) {}
  work(sleep_tag_t)
    : c_(cmd::SLEEP) {}
  work(die_tag_t)
    : c_(cmd::DIE) {}
};

struct ctrl {
  bool sleeping_;
  mutex mutex_;
  condition_variable cv_;
  ctrl() : sleeping_(false), mutex_(), cv_() {}
  CACHE_PADOUT;
};

class batcher {
public:
  batcher(unsigned batch_size, concurrent_queue<work> *queue)
    : batch_size_(batch_size), queue_(queue), n_() {}

  inline void
  enqueue(const dicestate &state)
  {
    n_++;
    states_.emplace_back(state);
    push(true);
  }

  inline void
  enqueue(dicestate &&state)
  {
    n_++;
    states_.emplace_back(state);
    push(true);
  }

  inline unsigned
  numenqueued() const
  {
    return n_;
  }

  inline void
  finish()
  {
    n_ = 0;
    push(false);
  }

private:
  inline void
  push(bool check)
  {
    if (check && likely(states_.size() < batch_size_))
      return;
    queue_->push(work(work::update_tag, move(states_)));
    states_.clear();
  }

  unsigned batch_size_;
  concurrent_queue<work> *queue_;
  vector<dicestate> states_;
  unsigned n_;
};

static concurrent_queue< work > work_queue;
static concurrent_hash_map<uint32_t, double> values;
static vector< padded<double> > abs_max_changes;
static vector< unique_ptr<ctrl> > controls;

static inline void
reset_abs_max_changes()
{
  for (auto &p : abs_max_changes)
    *p = 0;
}

static inline double
query_abs_max_changes()
{
  double m = 0.0;
  for (const auto &p : abs_max_changes)
    m = max(m, *p);
  return m;
}

static inline void
update_value(unsigned tid, uint32_t encoding, double newvalue)
{
  assert(tid < abs_max_changes.size());
  concurrent_hash_map<uint32_t, double>::accessor acc;
  const auto found = values.insert(acc, encoding);
  const double oldvalue = found ? acc->second : 0.0;
  *abs_max_changes[tid] = max(*abs_max_changes[tid], fabs(oldvalue - newvalue));
  acc->second = newvalue;
}

static inline double
read_value(uint32_t encoding)
{
  concurrent_hash_map<uint32_t, double>::const_accessor acc;
  const auto found = values.find(acc, encoding);
  return found ? acc->second : 0.0;
}

static void
update(unsigned tid, const dicestate &s)
{
  if ((s.flags_ & dicestate::MASK_CATEGORIES) == dicestate::MASK_CATEGORIES) {
    assert(s.roll_number_ == 0);
    assert(s.top_score_ == 0);
    assert(s.roll_state_.empty());
    // end state, nothing to do
    return;
  }
  if (s.roll_number_ == 0) {
    assert(s.roll_state_.empty());
    // can only roll (and we've asserted the game isn't over yet)
    // we set values(s) to the weighted average of all possible
    // rolls

    double sum = 0.0;
    for (auto &p : rolldists.back()) {
      p.first.assert_proper();
      sum += read_value(s.roll(p.first).encode()) * p.second;
    }

    update_value(tid, s.encode(), sum);
    return;
  }

  double best_so_far = 0.0;

  // can roll again
  if (s.roll_number_ < 3 ||
      (s.roll_number_ == 3 && !s.get_USED_BONUS_ROLL())) {
    const auto &partials = dicepartials(s.roll_state_);
    unsigned keep = 0;
    for (auto it = partials.begin(); it != partials.end(); ++it, ++keep) {
      assert(keep < 5);
      const unsigned roll = 5 - keep;
      for (auto &p : *it) {
        assert(p.count() == keep);
        double sum = 0.0;
        for (auto &outcome : rolldists[roll - 1]) {
          assert(outcome.first.count() == roll);
          const auto r = p.merge(outcome.first);
          r.assert_proper();
          sum += read_value(s.roll(r).encode()) * outcome.second;
        }
        best_so_far = max(best_so_far, sum);
      }
    }
  }

  // can accept
  const auto &scores = dicescores(s.roll_state_);
  assert(scores.size() == NUM_CATEGORIES);
  for (unsigned c = 0; c < NUM_CATEGORIES; c++) {
    if (s.has_selected((categories) c))
      continue;
    const double score = scores[c] + read_value(s.accept((categories) c).encode());
    best_so_far = max(best_so_far, score);
  }

  update_value(tid, s.encode(), best_so_far);
}

// enqueue work
static void
enqueue_with_scores(
    batcher &b, uint32_t flags,
    unsigned turn, const vector<unsigned> &scores)
{
  for (auto topscore : scores) {
    if (turn == 0) {
      dicestate s;
      s.flags_ = flags;
      s.top_score_ = topscore;
      b.enqueue(move(s));
    } else {
      for (auto &p : rollinfos) {
        dicestate s;
        s.flags_ = flags;
        s.top_score_ = topscore;
        s.roll_number_ = turn;
        s.roll_state_ = p.first;
        b.enqueue(move(s));
      }
    }
  }
}

static void
go0(unsigned tid)
{
  for (;;) {
    work w;
    if (!work_queue.try_pop(w))
      continue;
    switch (w.c_) {
    case work::cmd::UPDATE:
      for (auto &s : w.states_)
        update(tid, s);
      break;
    case work::cmd::SLEEP:
      {
        unique_lock<mutex> lock(controls[tid]->mutex_);
        ALWAYS_ASSERT( !controls[tid]->sleeping_ );
        controls[tid]->sleeping_ = true;
        while (controls[tid]->sleeping_)
          controls[tid]->cv_.wait(lock);
      }
      break;
    case work::cmd::DIE:
      return;
    default:
      ALWAYS_ASSERT(false);
    }
  }
}

static void
go(unsigned nworkers, double tol)
{
  assert(nworkers > 0);
  assert(tol > 0.0);

  abs_max_changes.resize( nworkers );
  for (unsigned i = 0; i < nworkers; i++)
    controls.emplace_back( new ctrl );

  vector<thread> workers;
  for (unsigned i = 0; i < nworkers; i++)
    workers.emplace_back(go0, i);

  batcher b(work::batch_size, &work_queue);
  for (unsigned iter = 0; ; iter++) {
    timer enq_timer, finish_timer;
    reset_abs_max_changes();
    for (uint32_t flags = 0; flags < (1<<dicestate::nbits_flags); flags++) {
      for (unsigned turn = 0; turn <= dicestate::max_roll_number; turn++) {
        const auto topidx = flags & dicestate::MASK_TOP_SCORES;
        assert(topidx < possibletopscores.size());
        if (topidx != dicestate::MASK_TOP_SCORES)
          // top scores still matter, because we haven't
          // chosen all of the top categories yet
          enqueue_with_scores(b, flags, turn, possibletopscores[topidx]);
        else {
          static const vector<unsigned> zerovec({0});
          enqueue_with_scores(b, flags, turn, zerovec);
        }
      }
    }
    const unsigned enqueued = b.numenqueued();
    b.finish();
    cout << "Enqueued " << enqueued << " states in "
         << (enq_timer.lap_ms()/1000.) << " sec" << endl;

    for (unsigned i = 0; i < nworkers; i++)
      work_queue.push(work(work::sleep_tag));
    for (unsigned i = 0; i < nworkers; i++) {
      unique_lock<mutex> lock(controls[i]->mutex_);
      while (!controls[i]->sleeping_)
        controls[i]->cv_.wait(lock);
    }
    for (unsigned i = 0; i < nworkers; i++) {
      unique_lock<mutex> lock(controls[i]->mutex_);
      controls[i]->sleeping_ = false;
      controls[i]->cv_.notify_one();
    }
    const double abs_max_change = query_abs_max_changes();
    cout << "Finished iteration " << (iter+1) << " in "
         << (finish_timer.lap_ms()/1000.) << " sec" << ", with |max_change| = "
         << abs_max_change << endl;
    if (abs_max_change <= tol)
      break;
  }

  for (unsigned i = 0; i < nworkers; i++)
    work_queue.push(work(work::die_tag));
  for (auto &w : workers)
    w.join();
}

static unsigned
num_cpus_online()
{
  const long nprocs = sysconf(_SC_NPROCESSORS_ONLN);
  ALWAYS_ASSERT(nprocs >= 1);
  return nprocs;
}

int
main(int argc, char **argv)
{
  //cout << "nbits_flags: " << dicestate::nbits_flags << endl;
  //cout << "nbits_max_top_score: " << dicestate::nbits_max_top_score << endl;
  //cout << "nbits_max_roll_number: " << dicestate::nbits_max_roll_number << endl;
  //cout << "nbits_roll_state: " << dicestate::nbits_roll_state << endl;
  //cout << "nbits: " << dicestate::encode_bits << endl;
  //cout << "len: " << (1UL << dicestate::encode_bits) << endl;

  go(num_cpus_online() * 2, 1e-1);
  return 0;
}
