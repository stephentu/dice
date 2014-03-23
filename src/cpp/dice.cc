#include "dice.hh"
#include "diceenum.hh"

namespace dice {

uint32_t
dicestate::encode() const
{
  uint32_t value = 0;
  assert(!(bits_ & ~((1<<(NUM_CATEGORIES+2))-1)));
  value |= bits_;
  value |= (rollinfos.find(roll_state_)->second.id_ << (NUM_CATEGORIES+2));
  assert(roll_number_ >= 1 && roll_number_ <= 3);
  value |= (roll_number_ - 1) << (NUM_CATEGORIES+2+lg_rollinfos_size);
  return value;
}

} // namespace dice
