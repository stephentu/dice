#include "dice.hh"
#include "diceenum.hh"
#include "log2.hh"
#include "timer.hh"

#include <chrono>
#include <random>

using namespace std;
using namespace dice;

static inline unsigned int
diceid(const diceroll &d)
{
  d.assert_proper();
  const auto it = rollinfos.find(d);
  assert(it != rollinfos.end());
  return it->second.id_;
}

static inline const vector< vector< diceroll > > &
dicepartials(const diceroll &d)
{
  d.assert_proper();
  const auto it = rollinfos.find(d);
  assert(it != rollinfos.end());
  return it->second.partials_;
}

static inline const vector< unsigned > &
dicescores(const diceroll &d)
{
  d.assert_proper();
  const auto it = rollinfos.find(d);
  assert(it != rollinfos.end());
  return it->second.scores_;
}

// this is what we are trying to learn!
//static vector< double > values;
static unordered_map< uint32_t, double > values;

static double abs_max_change = 0.0;

static inline void
update_value(uint32_t encoding, double newvalue)
{
  const double oldvalue = values[encoding];
  abs_max_change = max(abs_max_change, fabs(oldvalue - newvalue));
  values[encoding] = newvalue;
}

static void
update(const dicestate &s)
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
      sum += values[ s.roll(p.first).encode() ] * p.second;
    }

    update_value(s.encode(), sum);
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
          sum += values[ s.roll(r).encode() ] * outcome.second;
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
    const double score = scores[c] + values[ s.accept((categories) c).encode() ];
    best_so_far = max(best_so_far, score);
  }

  update_value(s.encode(), best_so_far);
}

static void
update_with_scores(uint32_t flags, unsigned turn, const vector<unsigned> &scores)
{
  for (auto topscore : scores) {
    if (turn == 0) {
      dicestate s;
      s.flags_ = flags;
      s.top_score_ = topscore;
      update(s);
    } else {
      for (auto &p : rollinfos) {
        dicestate s;
        s.flags_ = flags;
        s.top_score_ = topscore;
        s.roll_number_ = turn;
        s.roll_state_ = p.first;
        update(s);
      }
    }
  }
}

static void
go(double tol)
{
  // XXX: single threaded execution for now
  for (unsigned iter; ; iter++) {
    timer iter_timer, rate_timer;
    abs_max_change = 0.0; // reset
    unsigned states_updated = 0;
    for (uint32_t flags = 0; flags < (1<<dicestate::nbits_flags); flags++) {
      for (unsigned turn = 0; turn <= 3; turn++) {
        const auto topidx = flags & dicestate::MASK_TOP_SCORES;
        assert(topidx < possibletopscores.size());
        if (topidx != dicestate::MASK_TOP_SCORES)
          // top scores still matter, because we haven't
          // chosen all of the top categories yet
          update_with_scores(flags, turn, possibletopscores[topidx]);
        else
          update_with_scores(flags, turn, {0});
        if (!(++states_updated % 1000))
          cout << "Current rate: " << (1000./rate_timer.lap_ms()) << " states/ms" << endl;
      }
    }
    cout << "Finished iteration " << (iter+1) << " in "
         << (iter_timer.lap_ms()) << " ms" << ", with |max_change| = "
         << abs_max_change << endl;
    if (abs_max_change <= tol)
      break;
  }
}

int
main(int argc, char **argv)
{
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine gen(seed);
  diceroll d;
  d.roll(gen);
  cout << d << endl;

  cout << "nbits_flags: " << dicestate::nbits_flags << endl;
  cout << "nbits_max_top_score: " << dicestate::nbits_max_top_score << endl;
  cout << "nbits_max_roll_number: " << dicestate::nbits_max_roll_number << endl;
  cout << "nbits_roll_state: " << dicestate::nbits_roll_state << endl;
  cout << "nbits: " << dicestate::encode_bits << endl;
  cout << "len: " << (1UL << dicestate::encode_bits) << endl;

  //values.resize( 1UL << dicestate::encode_bits );

  go(1e-1);
  return 0;
}
