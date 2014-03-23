import itertools as it

if __name__ == '__main__':
    def tocpp(t):
        return '{' + ','.join(map(str, t)) + '}'

    print r'#pragma once'
    print r'#include "dice.hh"'
    print r'#include <unordered_map>'
    print r'namespace dice {'
    print r'static std::unordered_map<diceroll, unsigned> rollid = {'
    i = 0
    for x in it.product(range(0, 6), repeat=6):
        if sum(x) == 5:
            print '  {diceroll(' + tocpp(x) + '), ' + str(i) + '},'
            i += 1
    print r'};'
    print r'} // namespace dice'
