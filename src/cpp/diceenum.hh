// WARNING: auto-generated file
#pragma once
#include "dice.hh"
#include "log2.hh"
#include <unordered_map>
#include <vector>
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
const unsigned lg_rollinfos_size = ceil_log2(rollinfos.size());
std::vector< std::unordered_map<diceroll, double> > MakeRollDists();
const std::vector< std::unordered_map<diceroll, double> > rolldists = MakeRollDists();
std::vector< std::vector< unsigned > > MakePossibleTopScores();
const std::vector< std::vector< unsigned > > possibletopscores = MakePossibleTopScores();
} // namespace dice
