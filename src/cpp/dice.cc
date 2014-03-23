#include "dice.hh"
#include "diceenum.hh"

#include <chrono>
#include <random>


using namespace std;
using namespace dice;

static inline unsigned int
diceid(const diceroll &d)
{
  return rollid[d];
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
