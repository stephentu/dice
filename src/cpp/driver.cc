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
  bool first = true;
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
        float expected_outcome = 0.0;
        for (auto &outcome : rolldists[roll - 1]) {
          assert(outcome.first.count() == roll);
          const auto r = p.merge(outcome.first);
          r.assert_proper();
          expected_outcome += checked(values, s.roll(r).encode()) * outcome.second;
        }
        if (first || best_move_so_far.score() < expected_outcome) {
          best_move_so_far.type_             = move_type::ROLL;
          best_move_so_far.keep_             = p;
          best_move_so_far.reward_           = 0.0;
          best_move_so_far.expected_outcome_ = expected_outcome;
          first = false;
        }
      }
    }
  }

  // can accept
  const auto &scores = dicescores(s.roll_state_);
  assert(scores.size() == NUM_CATEGORIES);
  assert(s.top_score_ <= 62);
  for (unsigned c = 0; c < NUM_CATEGORIES; c++) {
    if (s.has_selected((categories) c))
      continue;
    unsigned reward = scores[c];
    if (c < CAT_3OFKIND) {
      const unsigned contrib = (c+1)*s.roll_state_.counts_[c];
      if (s.top_score_ + contrib >= 63)
        reward += 35;
    }
    const float expected_outcome = checked(values, s.accept((categories) c).encode());
    const float score = reward + expected_outcome;
    if (first || best_move_so_far.score() < score) {
      best_move_so_far.type_             = move_type::ACCEPT;
      best_move_so_far.accept_           = (categories) c;
      best_move_so_far.reward_           = reward;
      best_move_so_far.expected_outcome_ = expected_outcome;
      first = false;
    }
  }

  assert(!first);
  return best_move_so_far;
}
