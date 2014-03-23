#include "dice.hh"
#include "diceenum.hh"

#include <chrono>
#include <random>


using namespace std;
using namespace dice;

static inline unsigned int
diceid(const diceroll &d)
{
  d.assert_proper(); // not a partial
  assert(rollinfos.find(d) != rollinfos.end()); // found in pre-computed map
  return rollinfos[d].id_;
}

static inline const std::vector< diceroll > &
dicepartials(const diceroll &d)
{
  d.assert_proper();
  assert(rollinfos.find(d) != rollinfos.end());
  return rollinfos[d].partials_;
}

int
main(int argc, char **argv)
{
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  default_random_engine gen(seed);
  diceroll d;
  d.roll(gen);
  cout << d << endl;

  return 0;
}
