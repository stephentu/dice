#include "dice.hh"
#include "driver.hh"
#include "macros.hh"

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <chrono>
#include <random>
#include <cmath>

using namespace std;
using namespace dice;

template <typename T>
static inline double
sum(const vector<T> &values)
{
  double s = 0.0;
  for (auto v : values)
    s += v;
  return s;
}

template <typename T>
static inline double
mean(const vector<T> &values)
{
  return sum(values) / double(values.size());
}

template <typename T>
static inline double
var(const vector<T> &values)
{
  const double m = mean(values);
  double s = 0.0;
  for (auto v : values)
    s += (double(v) - m) * (double(v) - m);
  return s / double(values.size());
}

static inline string
flags_to_s(const dicestate &s)
{
  ostringstream oss;
  for (unsigned c = 0; c < NUM_CATEGORIES; c++) {
    if (s.flags_ & (1<<c))
      oss << "X";
    else
      oss << "_";
  }
  return oss.str();
}

template <typename PRNG>
static void
simulate(PRNG &prng, const vector<float> &values, size_t n)
{
  cerr << "starting simulation of " << n << " trials" << endl;
  vector<unsigned> scores;
  for (unsigned i = 0; i < n; i++) {
    dicestate s;
    s = s.roll(diceroll(prng));
    unsigned score = 0;
    while (!s.endstate()) {
      cerr << "CURSTATE: " << s.roll_state_
           << ", flags=" << flags_to_s(s)
           << ", bonus=" << s.get_USED_BONUS_ROLL()
           << ", roll=" << s.roll_number_
           << ", score=" << score
           << ", top_score=" << s.top_score_
           << endl;
      const auto p = driver::nextmove(values, s);
      score += p.reward_;
      if (p.type_ == driver::move_type::ACCEPT) {
        s = s.accept(p.accept_);
        s = s.roll(diceroll(prng));
        cerr << "ACCEPT category " << catstr(p.accept_) << endl;
      } else {
        ALWAYS_ASSERT( p.type_ == driver::move_type::ROLL );
        s = s.roll(p.keep_.complete(prng));
        cerr << "ROLL keep " << p.keep_ << endl;
      }
    }
    scores.push_back(score);
  }
  cerr << "mean=" << mean(scores) << ", std=" << sqrt(var(scores)) << endl;
}

static void
loadvalues(vector<float> &values, const string &filename)
{
  ifstream ifs(filename);
  if (!ifs.good())
    throw runtime_error("could not open " + filename);
  const ssize_t len = ifs.seekg(0, ifs.end).tellg();
  if (len == -1)
    throw runtime_error("could not seek");
  ALWAYS_ASSERT(len >= 0);
  ifs.seekg(0, ifs.beg);
  if (len % sizeof(float))
    throw runtime_error("bad file size: " + to_string(len));
  values.clear();
  values.resize(len / sizeof(float));
  ifs.read((char *) &values[0], len);
}

int
main(int argc, char **argv)
{
  const unsigned seed =
    chrono::system_clock::now().time_since_epoch().count();
  default_random_engine prng(seed);
  vector<float> values;
  if (argc > 1) {
    loadvalues(values, argv[1]);
    if (values.size() != (1UL << dicestate::encode_bits)) {
      cerr << "input values array not right size: expecting "
           << (1UL << dicestate::encode_bits) << ", got "
           << values.size() << endl;
      return 2;
    }
  } else {
    // load a dummy policy, just for testing purposes
    values.resize( 1UL << dicestate::encode_bits );
  }
  simulate(prng, values, 100);
  return 0;
}
