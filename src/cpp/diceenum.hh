// WARNING: auto-generated file
#pragma once
#include "dice.hh"
#include "log2.hh"
#include <cassert>
#include <vector>
#include <utility>
#include <memory>
namespace dice {
struct rollinfo {
  unsigned id_;
  std::vector< std::vector< diceroll > > partials_;
  std::vector< unsigned > scores_;
  rollinfo() : id_(), partials_(), scores_() {}
  rollinfo(unsigned id, const std::vector< std::vector< diceroll > > &partials, const std::vector< unsigned > &scores) : id_(id), partials_(partials), scores_(scores) {}
  rollinfo(unsigned id, std::vector< std::vector< diceroll > > &&partials, std::vector< unsigned > &&scores) : id_(id), partials_(std::move(partials)), scores_(std::move(scores)) {}
};
std::vector< std::unique_ptr<rollinfo> > MakeRollInfos();
const std::vector< std::unique_ptr<rollinfo> > rollinfos = MakeRollInfos();
std::vector< diceroll > MakeReverseRollInfos();
const std::vector< diceroll > reverserollinfos = MakeReverseRollInfos();
std::vector< std::vector< std::pair<diceroll, double> > > MakeRollDists();
const std::vector< std::vector< std::pair<diceroll, double> > > rolldists = MakeRollDists();
std::vector< std::vector< unsigned > > MakePossibleTopScores();
const std::vector< std::vector< unsigned > > possibletopscores = MakePossibleTopScores();
inline unsigned int
diceid(const diceroll &d)
{
  const auto idx = d.encode_small();
  assert(idx < rollinfos.size() && rollinfos[idx]);
  return rollinfos[idx]->id_;
}
inline const std::vector< std::vector< diceroll > > &
dicepartials(const diceroll &d)
{
  const auto idx = d.encode_small();
  assert(idx < rollinfos.size() && rollinfos[idx]);
  return rollinfos[idx]->partials_;
}
inline const std::vector< unsigned > &
dicescores(const diceroll &d)
{
  const auto idx = d.encode_small();
  assert(idx < rollinfos.size() && rollinfos[idx]);
  return rollinfos[idx]->scores_;
}
} // namespace dice
