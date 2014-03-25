#include "dice.hh"
#include "diceenum.hh"

namespace dice {

uint32_t
dicestate::encode() const
{
  roll_state_.assert_proper();
  uint32_t value = 0;
  assert( !(flags_ & ~((1<<nbits_flags)-1)) );
  value |= flags_;

  assert( !(top_score_ & ~((1<<nbits_max_top_score)-1)) );
  value |= (top_score_ << nbits_flags);

  assert( !(roll_number_ & ~((1<<nbits_max_roll_number)-1)) );
  value |= (roll_number_ << (nbits_flags + nbits_max_top_score));

  value |= (roll_state_.encode() << (nbits_flags + nbits_max_top_score + nbits_max_roll_number));
  return value;
}

// WARNING: must keep in sync with DICE_CATEGORIES
scorefn scoring::scorefn_table[] = {
    &scorefn_count<1>,
    &scorefn_count<2>,
    &scorefn_count<3>,
    &scorefn_count<4>,
    &scorefn_count<5>,
    &scorefn_count<6>,
    &scorefn_nofkind<3>,
    &scorefn_nofkind<4>,
    &scorefn_fullhouse,
    &scorefn_smallstraight,
    &scorefn_largestraight,
    &scorefn_nofkind<5>,
    &scorefn_chance,
  };

} // namespace dice
