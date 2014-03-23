import itertools as it
import sys

if __name__ == '__main__':
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

    print r'#pragma once'
    print r'#include "dice.hh"'
    print r'#include <unordered_map>'
    print r'namespace dice {'
    print r'struct rollinfo {'
    print r'  unsigned id_;'
    print r'  std::vector< diceroll > partials_;'
    print r'  rollinfo() id_(), partials_() {}'
    print r'  rollinfo(unsigned id, const std::vector< diceroll > &partials) : id_(id), partials_(partials) {}'
    print r'};'
    print r'const static std::unordered_map<diceroll, rollinfo> rollinfos = {'
    i = 0
    for x in it.product(range(0, 6), repeat=6):
        if sum(x) == 5:
            values = dicevalues(x)
            partials = set()
            for k in xrange(1, 5):
                for p in it.combinations(values, k):
                    partials.add(p)
            partials.add(tuple()) # keep nothing!
            rollinfo = r'rollinfo(' + str(i) + ', {' + ', '.join(r'diceroll(' + tocpp(canon(x)) + ')' for x in partials) + '})'
            print '  {diceroll(' + tocpp(x) + '), ' + rollinfo + '},'
            i += 1
    print r'};'

    # now we pre-compute all possible ways to roll k dice with the associated
    # probability distributions

    print r'const static std::vector< std::unordered_map<diceroll, double> > rolldists = {'

    for k in xrange(1, 6):
        seen = dict()
        print r'  {'
        for x in it.product(range(1, 7), repeat=k):
            m = canon(x)
            seen[m] = seen.get(m, 0) + 1
        total = float(6 ** k)
        for key, value in seen.iteritems():
            print r'    {diceroll(' + tocpp(key) + '), ' + str(float(value)/total) + '},'
        print r'  },'
    print r'};'

    print r'} // namespace dice'
