#!/usr/bin/env python2

import collections
import random
import itertools
import pickle
import math
import sys

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

def score_fn_count(count):
  return lambda dices: dices[count - 1]

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
      return sum(dices) if hinge else 0
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

def dicemap(dices):
  ret = [0, 0, 0, 0, 0, 0]
  for d in dices:
    ret[d - 1] += 1
  return ret

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
  CAT_CHANCE : sum,
}

def istopcat(cat):
  return cat <= CAT_6

def roll(n):
  ret = [0, 0, 0, 0, 0, 0]
  for i in xrange(n):
    ret[random.randint(0, 5)] += 1
  return ret

def dicecombine(a, b):
  ret = [0, 0, 0, 0, 0, 0]
  for i in xrange(6):
    ret[i] = a[i] + b[i]
  return ret

def diceminus(a, b):
  ret = [0, 0, 0, 0, 0, 0]
  for i in xrange(6):
    ret[i] = a[i] - b[i]
  return ret

def makeallrolls():
  ret = []
  for i in xrange(6):
    if not i:
      ret.append(({}, 0))
      continue
    l = list(itertools.product(*[range(1, 7) for _ in xrange(i)]))
    m = {}
    for p in l:
      k = tuple(dicemap(p))
      if k in m:
        m[k] += 1
      else:
        m[k] = 1
    ret.append((m, len(l)))
  return ret

def take(iterable):
  for i in iterable:
    return i

class State(object):
  ALLROLLS=makeallrolls()

  def __init__(self, dices, rnd, avail, bonus, top_score):
    # sanity
    assert dices == [] or (len(dices) == 6 and sum(dices) == 5)
    assert rnd == 0 or rnd == 1 or rnd == 2
    assert set(avail).issubset(ALL_CATEGORIES)
    assert bonus == 0 or bonus == 1
    assert top_score >= 0 and top_score <= 65

    self._dices = tuple(dices)
    self._round = rnd
    self._avail = frozenset(avail)
    self._bonus = bonus
    self._top_score = top_score

  def __eq__(self, y):
    return self._dices == y._dices and \
        self._round == y._round and \
        self._avail == y._avail and \
        self._bonus == y._bonus and \
        self._top_score == y._top_score

  def __hash__(self):
    return hash((self._dices, self._round, self._avail, self._bonus, self._top_score))

  def _diceactions(self):
    if self._round == 2 and self._bonus == 0:
      return []
    dices = dicevalues(self._dices)
    ret = []
    for n in xrange(0, 6):
      holds = set(itertools.combinations(dices, n))
      futurerolls, total = State.ALLROLLS[5 - n]
      for hold in holds:
        # hold is an action
        m = dicemap(hold)
        l = []
        for rolls, count in futurerolls.iteritems():
          pr = float(count)/total
          newdices = dicecombine(m, rolls)
          snew = State(
              newdices,
              self._round + 1 if self._round < 2 else 2,
              self._avail,
              self._bonus if self._round < 2 else 0,
              self._top_score)
          l.append((snew, 0.0, pr))
        ret.append((hold, l))
    return ret

  @staticmethod
  def _new_top_score(old_score, add):
    # returns (reward, new_top_score)
    elig = old_score < 65
    new_score = min(old_score + add, 65)
    return ((add + 35) if elig and new_score >= 65 else add), new_score

  def actions(self):
    """
    returns a list of all possible actions from this state,
    in the form of (action, [(s', reward, P_{a}(s, s'))])
    """

    if not self._dices:
      return []

    if self._round == 0 or self._round == 1:
      return self._diceactions()
    elif self._round == 2:
      ret = self._diceactions()
      # score
      endgame = len(self._avail) == 1
      if endgame:
        cat = take(self._avail)
        score = SCORE_FNS[cat](self._dices)
        if istopcat(cat):
          reward, new_top_score = State._new_top_score(self._top_score, score)
        else:
          reward, new_top_score = score, self._top_score
        newstate = State([], 0, [], 0, new_top_score)
        ret.append((cat, [(newstate, reward, 1.0)]))
      else:
        futurerolls, total = State.ALLROLLS[5]
        for cat in self._avail:
          score = SCORE_FNS[cat](self._dices)
          if istopcat(cat):
            reward, new_top_score = State._new_top_score(self._top_score, score)
          else:
            reward, new_top_score = score, self._top_score
          for rolls, count in futurerolls.iteritems():
            pr = float(count)/total
            newstate = State(
                rolls,
                0,
                [c for c in self._avail if c != cat],
                self._bonus,
                new_top_score)
            ret.append((cat, [(newstate, reward, pr)]))
      return ret

  def __str__(self):
    return '<dices=%s, round=%d, avail=..., bonus=%d, topscore=%d>' % (
        self._dices,
        self._round,
        self._bonus,
        self._top_score)

  def __repr__(self):
    return str(self)

class DiceWithBuddies(object):
  def __init__(self):
    self._v = {} # state table
  def solve(self):
    outeri = 0
    while 1:
      q = []
      for r, _ in State.ALLROLLS[5][0].iteritems():
        q.append(State(r, 0, ALL_CATEGORIES, 1, 0))
      i = 0
      maxchange = 0.0
      seen = set()
      while q:
        s = q.pop()
        actions = s.actions()
        maxsofar = 0.0
        for a, outcomes in actions:
          running = 0.0
          for snew, r, pr in outcomes:
            if snew not in seen:
              q.append(snew)
              seen.add(snew)
            running += pr * (r + self._v.get(snew, 0.0))
          maxsofar = max(maxsofar, running)
        maxchange = max(maxchange, math.fabs(self._v.get(s, 0.0) - maxsofar))
        self._v[s] = maxsofar
        i += 1
        if (i % 100000) == 0:
          # checkpoint computation
          print >>sys.stderr, '[INFO] [iter %d] iteration %d checkpoint' % (outeri + 1, i)
          pickle.dump(self._v, open('v.pickle', 'w'))
      outeri += 1
      print >>sys.stderr, '[INFO] max change after complete iteration %d (%d updates) %f' % (outeri, i, maxchange)
      if maxchange <= 1e-3:
        break

if __name__ == '__main__':
  #for k, v in State.ALLROLLS:
  #  print k, v
  #s = State([1, 1, 1, 1, 1, 0], 0, ALL_CATEGORIES, 1, 0)
  #for a in s.actions():
  #  print a

  d = DiceWithBuddies()
  d.solve()
