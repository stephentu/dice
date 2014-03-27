// WARNING: auto-generated file
#pragma once
#include "dice.hh"
#include "log2.hh"
#include <unordered_map>
#include <vector>
#include <cassert>
namespace dice {
struct rollinfo {
  unsigned id_;
  std::vector< std::vector< diceroll > > partials_;
  std::vector< unsigned > scores_;
  rollinfo() : id_(), partials_(), scores_() {}
  rollinfo(unsigned id, const std::vector< std::vector< diceroll > > &partials, const std::vector< unsigned > &scores) : id_(id), partials_(partials), scores_(scores) {}
};
std::unordered_map<diceroll, rollinfo> MakeRollInfos();
const std::unordered_map<diceroll, rollinfo> rollinfos = MakeRollInfos();
std::vector< diceroll > MakeReverseRollInfos();
const std::vector< diceroll > reverserollinfos = MakeReverseRollInfos();
std::vector< std::unordered_map<diceroll, double> > MakeRollDists();
const std::vector< std::unordered_map<diceroll, double> > rolldists = MakeRollDists();
std::vector< std::vector< unsigned > > MakePossibleTopScores();
const std::vector< std::vector< unsigned > > possibletopscores = MakePossibleTopScores();
inline unsigned int
diceid(const diceroll &d)
{
  d.assert_proper();
  const auto it = rollinfos.find(d);
  assert(it != rollinfos.end());
  return it->second.id_;
}
inline const std::vector< std::vector< diceroll > > &
dicepartials(const diceroll &d)
{
  d.assert_proper();
  const auto it = rollinfos.find(d);
  assert(it != rollinfos.end());
  return it->second.partials_;
}
inline const std::vector< unsigned > &
dicescores(const diceroll &d)
{
  d.assert_proper();
  const auto it = rollinfos.find(d);
  assert(it != rollinfos.end());
  return it->second.scores_;
}
} // namespace dice
