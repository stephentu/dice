#include "dice.hh"
#include "diceenum.hh"
#include "log2.hh"

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

static inline const std::vector< diceroll > &
dicepartials(const diceroll &d)
{
  d.assert_proper();
  const auto it = rollinfos.find(d);
  assert(it != rollinfos.end());
  return it->second.partials_;
}

static inline const std::vector< unsigned > &
dicescores(const diceroll &d)
{
  d.assert_proper();
  const auto it = rollinfos.find(d);
  assert(it != rollinfos.end());
  return it->second.scores_;
}

// this is what we are trying to learn!
static std::vector< double > values;

int
main(int argc, char **argv)
{
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine gen(seed);
  diceroll d;
  d.roll(gen);
  cout << d << endl;

  // count number of bits needed to index each state
  const unsigned nbits =
    NUM_CATEGORIES + /* bit per category */
    2 + /* 1 bit for used bonus roll and another for top points possible */
    lg_rollinfos_size + /* number of possible full dice hands */
    ceil_log2_const(3) /* after 1st, 2nd, or 3rd roll */
    ;

  cout << "nbits: " << nbits << endl;

  values.resize( 1 << nbits );

  return 0;
}
