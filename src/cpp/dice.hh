#pragma once

#include <cassert>
#include <cstring>
#include <random>
#include <iostream>
#include <vector>

#include "pretty_printers.hh"

namespace dice {

#define DICE_CATEGORIES(x) \
  x(CAT_1) \
  x(CAT_2) \
  x(CAT_3) \
  x(CAT_4) \
  x(CAT_5) \
  x(CAT_6) \
  x(CAT_3OFKIND) \
  x(CAT_4OFKIND) \
  x(CAT_FULLHOUSE) \
  x(CAT_SMALLSTRAIGHT) \
  x(CAT_LARGESTRAIGHT) \
  x(CAT_5OFKIND) \
  x(CAT_CHANCE)

enum categories {
#define DICENAMES(name) \
  name,
  DICE_CATEGORIES(DICENAMES)
#undef DICENAMES
  NUM_CATEGORIES,
};

static inline const char *
catstr(categories c)
{
  switch (c) {
#define DICESTR(c) \
  case c: return #c;
  DICE_CATEGORIES(DICESTR)
#undef DICESTR
  default:
    break;
  }
  return nullptr;
}

struct diceroll {
  uint8_t counts_[6];

  /**
   * initializes to empty roll
   */
  diceroll()
  {
    reset();
  }

  enum class type { BUCKETS, VALUES };

  /**
   * initializes to the input vector
   */
  diceroll(const std::vector<unsigned> &v, type t = type::BUCKETS)
  {
    reset();
    if (t == type::BUCKETS) {
      assert(v.size() == 6);
      for (unsigned i = 0; i < 6; i++)
        counts_[i] = v[i];
    } else {
      for (auto e : v)
        counts_[e-1]++;
    }
  }

  inline unsigned int
  sum() const
  {
    unsigned int s = 0;
    for (unsigned i = 0; i < 6; i++)
      s += (i+1)*counts_[i];
    return s;
  }

  inline unsigned int
  bitmap() const
  {
    unsigned int s = 0;
    for (unsigned i = 0; i < 6; i++)
      if (counts_[i])
        s |= (0x1 << i);
    return s;
  }

  inline uint32_t
  encode() const
  {
    uint32_t s = 0;
    for (unsigned i = 0; i < 6; i++)
      s |= counts_[i] << (3 * i);
    return s;
  }

  template <typename PRNG>
  inline void
  roll(PRNG &prng)
  {
    reset();
    std::uniform_int_distribution<unsigned> unif(0, 5);
    for (unsigned i = 0; i < 5; i++)
      counts_[ unif(prng) ]++;
  }

  inline void
  reset()
  {
    //memset(&counts_, 0, sizeof(uint8_t) * 6);
    for (unsigned i = 0; i < 6; i++)
      counts_[i] = 0;
  }

  inline std::vector<unsigned>
  vec() const
  {
    std::vector<unsigned> v;
    for (unsigned i = 0; i < 6; i++)
      for (unsigned j = 0; j < counts_[i]; j++)
        v.push_back(i+1);
    return v;
  }

  inline bool
  operator==(const diceroll &that) const
  {
    //return memcmp(&counts_[0], &that.counts_[0], sizeof(uint8_t) * 6);
    return counts_[0] == that.counts_[0] &&
           counts_[1] == that.counts_[1] &&
           counts_[2] == that.counts_[2] &&
           counts_[3] == that.counts_[3] &&
           counts_[4] == that.counts_[4] &&
           counts_[5] == that.counts_[5];
  }

  inline uint64_t
  hash() const
  {
    return std::hash<uint32_t>()(encode());
  }

  inline void
  assert_proper() const
  {
    unsigned s = 0;
    for (unsigned i = 0; i < 6; i++) {
      assert(counts_[i] <= 5);
      s += counts_[i];
    }
    assert(s == 5);
  }
};

struct dicestate {

  uint32_t bits_;
  diceroll roll_state_;
  uint8_t roll_number_;

  dicestate() : bits_(0), roll_state_(), roll_number_(0) {}

#define GETTER_SETTER(name, flag) \
  inline bool \
  get_## name () const \
  { \
    return bits_ & (flag); \
  } \
  inline void \
  set_## name (bool b) \
  { \
    if (b) \
      bits_ |= (flag); \
    else \
      bits_ &= ~((flag)); \
  }

#define DICEBITS_GS(name) \
  GETTER_SETTER(name, (0x1 << name))
  DICE_CATEGORIES(DICEBITS_GS)
#undef DICEBITS_GS

  GETTER_SETTER(USED_BONUS_ROLL, (0x1 << NUM_CATEGORIES))
  GETTER_SETTER(TOP_POINTS_IMPOSSIBLE, (0x1 << (NUM_CATEGORIES+1)))

#undef GETTER_SETTER

  // encode this state into a number
  uint32_t encode() const;
};


/**
 * score functions, which take a diceroll and return an integer score
 */

template <unsigned int Count>
static unsigned int
scorefn_count(const diceroll &d)
{
  static_assert(Count >= 1 && Count <= 6, "xx");
  return d.counts_[Count-1];
}

template <unsigned int Count>
static unsigned int
scorefn_nofkind(const diceroll &d)
{
  static_assert(Count >= 3 && Count <= 5, "xx");
  bool found = false;
  for (unsigned i = 0; i < 6; i++) {
    if (d.counts_[i] >= Count) {
      found = true;
      break;
    }
  }
  if (found)
    return Count == 5 ? 50 : d.sum();
  else
    return 0;
};

static unsigned int
scorefn_fullhouse(const diceroll &d)
{
  bool has_3 = false, has_2 = false;
  for (unsigned i = 0; i < 6 && !has_3 && !has_2; i++) {
    if (d.counts_[i] == 3)
      has_3 = true;
    else if (d.counts_[i] == 2)
      has_2 = true;
  }
  return has_3 && has_2 ? 25 : 0;
}

static unsigned int
scorefn_smallstraight(const diceroll &d)
{
  const unsigned int bits = d.bitmap();
  return (bits & 0xF) || (bits & (0xF << 1)) || (bits & (0xF << 2));
}

static unsigned int
scorefn_largestraight(const diceroll &d)
{
  const unsigned int bits = d.bitmap();
  return (bits & 0x1F) || (bits & (0x1F << 1));
}

static unsigned int
scorefn_chance(const diceroll &d)
{
  return d.sum();
}

// WARNING: must keep in sync with DICE_CATEGORIES
typedef unsigned int (*scorefn)(const diceroll &d);
static scorefn scorefn_table[] = {
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

static inline std::ostream &
operator<<(std::ostream &o, const dice::diceroll &d)
{
  o << d.vec();
  return o;
}

namespace std {
  template <> struct hash<dice::diceroll> {
    inline uint64_t operator()(const dice::diceroll &d) const { return d.hash(); }
  };
};
