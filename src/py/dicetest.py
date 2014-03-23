import itertools as it
import sys
import os

### Game constants ###
CAT_1 = 1
CAT_2 = 2
CAT_3 = 3
CAT_4 = 4
CAT_5 = 5
CAT_6 = 6
CAT_3OFKIND = 7
CAT_4OFKIND = 8
CAT_FULLHOUSE = 9
CAT_SMALLSTRAIGHT = 10
CAT_LARGESTRAIGHT = 11
CAT_5OFKIND = 12
CAT_CHANCE = 13

ALL_CATEGORIES = frozenset(range(1, 14))

def nnz(dices, begin, end):
  n = 0
  for i in xrange(begin, end):
    if dices[i] > 0:
      n += 1
  return n

def dicesum(dices):
  return sum((i+1)*count for i, count in enumerate(dices))

def score_fn_count(count):
  return lambda dices: count * dices[count - 1]

def score_fn_Nofkind(N):
  def fn(dices):
    hinge = False
    for c in dices:
      if c >= N:
        hinge = True
        break
    if N == 5:
      return 50 if hinge else 0
    else:
      return dicesum(dices) if hinge else 0
  return fn

def score_fn_fullhouse(dices):
  has_3 = False
  has_2 = False
  for c in dices:
    if c == 3:
      has_3 = True
    elif c == 2:
      has_2 = True
  return 25 if has_3 and has_2 else 0

def score_fn_smallstraight(dices):
  hinge = (nnz(dices, 0, 4) == 4) or (nnz(dices, 1, 5) == 4) or (nnz(dices, 2, 6) == 4)
  return 40 if hinge else 0

def score_fn_largestraight(dices):
  return 50 if nnz(dices, 0, 5) == 5 or nnz(dices, 1, 6) == 5 else 0

SCORE_FNS = {
  CAT_1 : score_fn_count(1),
  CAT_2 : score_fn_count(2),
  CAT_3 : score_fn_count(3),
  CAT_4 : score_fn_count(4),
  CAT_5 : score_fn_count(5),
  CAT_6 : score_fn_count(6),
  CAT_3OFKIND : score_fn_Nofkind(3),
  CAT_4OFKIND : score_fn_Nofkind(4),
  CAT_FULLHOUSE : score_fn_fullhouse,
  CAT_SMALLSTRAIGHT : score_fn_smallstraight,
  CAT_LARGESTRAIGHT : score_fn_largestraight,
  CAT_5OFKIND : score_fn_Nofkind(5),
  CAT_CHANCE : dicesum,
}

if __name__ == '__main__':
    (_, hdrfile, cppfile) = sys.argv

    def tocpp(t):
        return '{' + ','.join(map(str, t)) + '}'

    def dicevalues(dices):
        '''
        turns [n1, n2, n3, n4, n5, n6] dice map into
        a list of dice, (ie [1, 1, 2, 3, 3])
        '''
        ret = []
        for i in xrange(len(dices)):
            for _ in xrange(dices[i]):
                ret.append(i + 1)
        return ret

    def canon(rolls):
        ret = [0, 0, 0, 0, 0, 0]
        for d in rolls:
            ret[d - 1] += 1
        return tuple(ret)

    # make header file
    with open(hdrfile, 'w') as fp:
        print >>fp, r'// WARNING: auto-generated file'
        print >>fp, r'#pragma once'
        print >>fp, r'#include "dice.hh"'
        print >>fp, r'#include <unordered_map>'
        print >>fp, r'#include <vector>'
        print >>fp, r'namespace dice {'
        print >>fp, r'struct rollinfo {'
        print >>fp, r'  unsigned id_;'
        print >>fp, r'  std::vector< diceroll > partials_;'
        print >>fp, r'  std::vector< unsigned > scores_;'
        print >>fp, r'  rollinfo() : id_(), partials_(), scores_() {}'
        print >>fp, r'  rollinfo(unsigned id, const std::vector< diceroll > &partials, const std::vector< unsigned > &scores) : id_(id), partials_(partials), scores_(scores) {}'
        print >>fp, r'};'
        print >>fp, r'std::unordered_map<diceroll, rollinfo> MakeRollInfos();'
        print >>fp, r'const std::unordered_map<diceroll, rollinfo> rollinfos = MakeRollInfos();'
        print >>fp, r'std::vector< std::unordered_map<diceroll, double> > MakeRollDists();'
        print >>fp, r'const std::vector< std::unordered_map<diceroll, double> > rolldists = MakeRollDists();'
        print >>fp, r'} // namespace dice'

    with open(cppfile, 'w') as fp:
        print >>fp, r'// WARNING: auto-generated file'
        print >>fp, r'#include "%s"' % (os.path.basename(hdrfile))
        print >>fp, r'namespace dice {'
        print >>fp, r'std::unordered_map<diceroll, rollinfo> MakeRollInfos() { return {'
        i = 0
        for x in it.product(range(0, 6), repeat=6):
            if sum(x) == 5:
                values = dicevalues(x)
                partials = set()
                for k in xrange(1, 5):
                    for p in it.combinations(values, k):
                        partials.add(p)
                partials.add(tuple()) # keep nothing!
                scores = [SCORE_FNS[i](x) for i in ALL_CATEGORIES]
                rollinfo = r'rollinfo(' + str(i) + ', {' + ', '.join(r'diceroll(' + tocpp(canon(x)) + ')' for x in partials) + '}, ' + tocpp(scores) + ')'
                print >>fp, r'  {diceroll(' + tocpp(x) + '), ' + rollinfo + '},'
                i += 1
        print >>fp, r'};}'

        # now we pre-compute all possible ways to roll k dice with the associated
        # probability distributions

        print >>fp, r'std::vector< std::unordered_map<diceroll, double> > MakeRollDists() { return {'

        for k in xrange(1, 6):
            seen = dict()
            print >>fp, r'  {'
            for x in it.product(range(1, 7), repeat=k):
                m = canon(x)
                seen[m] = seen.get(m, 0) + 1
            total = float(6 ** k)
            for key, value in seen.iteritems():
                print >>fp, r'    {diceroll(' + tocpp(key) + '), ' + str(float(value)/total) + '},'
            print >>fp, r'  },'
        print >>fp, r'};}'

        print >>fp, r'} // namespace dice'
