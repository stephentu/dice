#include "driver.hh"
#include "diceenum.hh"
#include "util.hh"
using namespace std;
using namespace dice;
using namespace util;
driver::move
driver::nextmove(const vector<float> &values,
                 const dicestate &s)
{
  move best_move_so_far;

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
        float sum = 0.0;
        for (auto &outcome : rolldists[roll - 1]) {
          assert(outcome.first.count() == roll);
          const auto r = p.merge(outcome.first);
          r.assert_proper();
          sum += checked(values, s.roll(r).encode()) * outcome.second;
        }
        if (best_move_so_far.expected_outcome_ < sum) {
          best_move_so_far.type_             = move_type::ROLL;
          best_move_so_far.keep_             = p;
          best_move_so_far.reward_           = 0.0;
          best_move_so_far.expected_outcome_ = sum;
        }
      }
    }
  }

  // can accept
  const auto &scores = dicescores(s.roll_state_);
  assert(scores.size() == NUM_CATEGORIES);
  for (unsigned c = 0; c < NUM_CATEGORIES; c++) {
    if (s.has_selected((categories) c))
      continue;
    const float score = scores[c] + checked(values, s.accept((categories) c).encode());
    if (best_move_so_far.expected_outcome_ < score) {
      best_move_so_far.type_             = move_type::ACCEPT;
      best_move_so_far.accept_           = (categories) c;
      best_move_so_far.reward_           = scores[c];
      best_move_so_far.expected_outcome_ = score;
    }
  }

  return best_move_so_far;
}
