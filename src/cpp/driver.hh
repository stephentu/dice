#pragma once
#include "dice.hh"
#include <utility>
#include <vector>
namespace dice {
struct driver {
  enum class move_type { ROLL, ACCEPT };
  struct move {
    move_type type_;
    diceroll keep_;
    categories accept_;
    unsigned reward_;
    float expected_outcome_;
    move() : type_(), keep_(), accept_(), reward_(), expected_outcome_() {}
  };
  static move
  nextmove(const std::vector<float> &values, const dicestate &s);
};
} // namespace dice
