#include "macros.hh"
#include "dice.hh"

using namespace dice;
using namespace std;

/**
 * Crude testing program
 */

static void
test_encode_decode()
{
  dicestate s;
  s.flags_ = (1<<CAT_1) | (1<<CAT_4) | (1<<CAT_SMALLSTRAIGHT);
  s.top_score_ = (3*1) + (4*4);
  s.roll_number_ = 1;
  const auto roll = vector<unsigned>({ 1, 1, 3, 6, 6 });
  s.roll_state_ = diceroll(roll, diceroll::type::VALUES);

  const auto encoded = s.encode();
  ALWAYS_ASSERT(encoded ==
      ((s.flags_) |
       (s.top_score_ <<
          (dicestate::nbits_flags)) |
       (s.roll_number_ <<
          (dicestate::nbits_flags + dicestate::nbits_max_top_score)) |
       (s.roll_state_.encode() <<
          (dicestate::nbits_flags + dicestate::nbits_max_top_score +
           dicestate::nbits_max_roll_number))));
}

int
main(int argc, char **argv)
{
  test_encode_decode();
  return 0;
}
