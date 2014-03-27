#pragma once

#include <cassert>
#include <cstring>
#include <random>
#include <iostream>
#include <vector>

#include "log2.hh"
#include "pretty_printers.hh"

namespace dice {

// WARNING: changing the order will break stuff
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

  diceroll(const diceroll &) = default;

  // decode
  diceroll(uint32_t encoding);

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

  diceroll(unsigned c0,
           unsigned c1,
           unsigned c2,
           unsigned c3,
           unsigned c4,
           unsigned c5)
  {
    counts_[0] = c0; counts_[1] = c1; counts_[2] = c2;
    counts_[3] = c3; counts_[4] = c4; counts_[5] = c5;
  }

  inline unsigned
  sum() const
  {
    unsigned s = 0;
    for (unsigned i = 0; i < 6; i++)
      s += (i+1)*counts_[i];
    return s;
  }

  inline unsigned
  count() const
  {
    unsigned s = 0;
    for (unsigned i = 0; i < 6; i++)
      s += counts_[i];
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

  uint32_t encode() const;

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

  inline diceroll
  merge(const diceroll &that) const
  {
    diceroll d(*this);
    for (unsigned i = 0; i < 6; i++)
      d.counts_[i] += that.counts_[i];
    return d;
  }

  // XXX: hash is not encode(), since encode()
  // relies on hash()
  inline uint64_t
  hash() const
  {
    uint32_t h = 0;
    for (unsigned i = 0; i < 6; i++)
      h |= (counts_[i] << (3*i));
    return std::hash<uint32_t>()(h);
  }

  inline bool
  proper() const
  {
    return count() == 5;
  }

  inline void
  assert_proper() const
  {
    assert(proper());
  }

  inline bool
  empty() const
  {
    // faster than count() == 0
    for (unsigned i = 0; i < 6; i++)
      if (counts_[i])
        return false;
    return true;
  }

  // nchoosek( n+m-1, m-1 ) where n=5, m=6
  static const unsigned nproper_rolls = 252;
};

struct dicestate {

  uint32_t flags_;

  unsigned top_score_;
  unsigned roll_number_;
  diceroll roll_state_;

  dicestate() : flags_(), top_score_(), roll_number_(), roll_state_() {}

  dicestate(uint32_t flags, unsigned top_score,
            unsigned roll_number, const diceroll &roll_state)
    : flags_(flags), top_score_(top_score),
      roll_number_(roll_number), roll_state_(roll_state) {}

  dicestate(uint32_t encoding);

#define GETTER_SETTER(name, flag) \
  inline bool \
  get_## name () const \
  { \
    return flags_ & (flag); \
  } \
  inline void \
  set_## name (bool b) \
  { \
    if (b) \
      flags_ |= (flag); \
    else \
      flags_ &= ~((flag)); \
  } \
  static const unsigned MASK_ ## name = flag;

#define DICEBITS_GS(name) \
  GETTER_SETTER(name, (0x1 << name))
  DICE_CATEGORIES(DICEBITS_GS)
  GETTER_SETTER(USED_BONUS_ROLL, (0x1 << NUM_CATEGORIES))
#undef DICEBITS_GS
#undef GETTER_SETTER

  static const unsigned nbits_flags = NUM_CATEGORIES + 1;
  static const unsigned max_top_score =
    1*5 + 2*5 + 3*5 + 4*5 + 5*5;
  static const unsigned max_roll_number = 3; // [0, 3]

  static const unsigned nbits_max_top_score =
    ceil_log2_const(max_top_score + 1);
  static const unsigned nbits_max_roll_number =
    ceil_log2_const(max_roll_number + 1);
  static const unsigned nbits_roll_state =
    ceil_log2_const(diceroll::nproper_rolls);

  // number of bits used to encode (top bits are empty)
  static const unsigned encode_bits =
    nbits_flags +
    nbits_max_top_score +
    nbits_max_roll_number +
    nbits_roll_state
    ;

  static_assert( encode_bits <= 32, "" );

  // encode this state into a number
  uint32_t encode() const;

  inline dicestate
  roll(const diceroll &roll) const
  {
    assert(roll_number_ < 3 ||
           (roll_number_ == 3 && !get_USED_BONUS_ROLL()));
    if (roll_number_ < 3)
      return dicestate(flags_, top_score_, roll_number_ + 1, roll);
    else
      return dicestate(flags_ | MASK_USED_BONUS_ROLL, top_score_, 3, roll);
  }

  static const uint32_t MASK_TOP_SCORES = ((1<<CAT_3OFKIND)-1);
  static const uint32_t MASK_CATEGORIES = ((1<<NUM_CATEGORIES)-1);

  inline dicestate
  accept(categories c) const
  {
    assert(roll_number_ > 0);
    roll_state_.assert_proper();
    assert(c < NUM_CATEGORIES);
    assert(!(flags_ & (1 << c)));
    if (c < CAT_3OFKIND) {
      const uint32_t newflags = flags_ & c;
      const uint32_t mask = MASK_TOP_SCORES;
      const unsigned newscore =
        ((newflags & mask) == mask) ? 0 : (c+1)*roll_state_.counts_[c];
      return dicestate(flags_ | (1 << c), newscore, 0, diceroll());
    } else
      return dicestate(flags_ | (1 << c), top_score_, 0, diceroll());
  }

  inline bool
  has_selected(categories c) const
  {
    assert(c < NUM_CATEGORIES);
    return flags_ & (1<<c);
  }

};

typedef unsigned int (*scorefn)(const diceroll &d);
struct scoring {
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

  static scorefn scorefn_table[];
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
