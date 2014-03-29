#include "dice.hh"
#include "driver.hh"
#include "macros.hh"

#include <iostream>
#include <chrono>
#include <random>
#include <cmath>

using namespace std;
using namespace dice;

static inline float
sum(const vector<float> &values)
{
  float s = 0.0;
  for (auto v : values)
    s += v;
  return s;
}

static inline float
mean(const vector<float> &values)
{
  return sum(values) / float(values.size());
}

static inline float
var(const vector<float> &values)
{
  const float m = mean(values);
  float s = 0.0;
  for (auto v : values)
    s += (v - m) * (v - m);
  return s / float(values.size());
}

template <typename PRNG>
static void
simulate(PRNG &prng, const vector<float> &values, size_t n)
{
  vector<float> scores;
  for (unsigned i = 0; i < n; i++) {
    dicestate s;
    s = s.roll(diceroll(prng));
    float score = 0.0;
    while (!s.endstate()) {
      const auto p = driver::nextmove(values, s);
      score += p.reward_;
      if (p.type_ == driver::move_type::ACCEPT) {
        s = s.accept(p.accept_);
        s = s.roll(diceroll(prng));
      } else {
        ALWAYS_ASSERT( p.type_ == driver::move_type::ROLL );
        s = s.roll(p.keep_.complete(prng));
      }
    }
    scores.push_back(score);
  }
  cout << "mean=" << mean(values) << ", std=" << sqrt(var(values)) << endl;
}

int
main(int argc, char **argv)
{
  if (argc == 1) {
    cerr << "[usage]" << argv[0] << " filename" << endl;
    return 1;
  }
  const unsigned seed =
    chrono::system_clock::now().time_since_epoch().count();
  default_random_engine prng(seed);
  simulate(prng, {}, 1000); // XXX: fill out values
  return 0;
}
