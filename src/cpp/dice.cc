#include "dice.hh"
#include "diceenum.hh"

namespace dice {

diceroll::diceroll(encode_type_small_t, uint32_t encoding)
{
  assert(encoding < (6*6*6*6*6*6));
  for (unsigned i = 0; i < 6; i++, encoding /= 6)
    counts_[i] = encoding % 6;
}

diceroll::diceroll(encode_type_tiny_t, uint32_t encoding)
{
  assert(encoding <= reverserollinfos.size());
  if (encoding == reverserollinfos.size())
    reset();
  else
    *this = reverserollinfos[encoding];
}

uint32_t
diceroll::encode_small() const
{
  uint32_t encoding = 0;
  uint32_t mult = 1;
  for (unsigned i = 0; i < 6; i++, mult *= 6)
    encoding += counts_[i] * mult;
  return encoding;
}

uint32_t
diceroll::encode_tiny() const
{
  if (empty())
    return reverserollinfos.size();
  else
    return diceid(*this);
}

dicestate::dicestate(uint32_t encoding)
{
  flags_ = encoding & ((1<<nbits_flags)-1);
  top_score_ = (encoding >> nbits_flags) & ((1<<nbits_max_top_score)-1);
  roll_number_ = (encoding >> (nbits_flags + nbits_max_top_score)) &
    ((1<<nbits_max_roll_number)-1);
  roll_state_ = diceroll(diceroll::encode_type_tiny,
      encoding >> (nbits_flags + nbits_max_top_score + nbits_max_roll_number));
}

uint32_t
dicestate::encode() const
{
  assert( roll_state_.proper() || roll_state_.empty() );
  uint32_t value = 0;
  assert( !(flags_ & ~((1<<nbits_flags)-1)) );
  value |= flags_;

  assert( !(top_score_ & ~((1<<nbits_max_top_score)-1)) );
  value |= (top_score_ << nbits_flags);

  assert( !(roll_number_ & ~((1<<nbits_max_roll_number)-1)) );
  value |= (roll_number_ << (nbits_flags + nbits_max_top_score));

  const uint32_t e = roll_state_.encode_tiny();
  assert( !(e & ~((1<<nbits_roll_state)-1)) );
  value |= (e << (nbits_flags + nbits_max_top_score + nbits_max_roll_number));
  assert( value < (1<<encode_bits) );
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
