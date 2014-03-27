// WARNING: auto-generated file
#include "diceenum.hh"
namespace dice {
std::unordered_map<diceroll, rollinfo> MakeRollInfos() {
  std::unordered_map<diceroll, rollinfo> ret;
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 4);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 0, 0, 5)] = rollinfo(0, partials, std::vector<unsigned>({0,0,0,0,0,30,30,30,0,0,0,50,30}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 3);
      p.emplace_back(0, 0, 0, 0, 0, 4);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 0, 1, 4)] = rollinfo(1, partials, std::vector<unsigned>({0,0,0,0,5,24,29,29,0,0,0,0,29}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 2);
      p.emplace_back(0, 0, 0, 0, 1, 3);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 0, 2, 3)] = rollinfo(2, partials, std::vector<unsigned>({0,0,0,0,10,18,28,0,25,0,0,0,28}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 2);
      p.emplace_back(0, 0, 0, 0, 3, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 0, 3, 2)] = rollinfo(3, partials, std::vector<unsigned>({0,0,0,0,15,12,27,0,25,0,0,0,27}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 4, 0);
      p.emplace_back(0, 0, 0, 0, 3, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 0, 4, 1)] = rollinfo(4, partials, std::vector<unsigned>({0,0,0,0,20,6,26,26,0,0,0,0,26}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 4, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 0, 5, 0)] = rollinfo(5, partials, std::vector<unsigned>({0,0,0,0,25,0,25,25,0,0,0,50,25}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 3);
      p.emplace_back(0, 0, 0, 0, 0, 4);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 1, 0, 4)] = rollinfo(6, partials, std::vector<unsigned>({0,0,0,4,0,24,28,28,0,0,0,0,28}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 3);
      p.emplace_back(0, 0, 0, 0, 1, 3);
      p.emplace_back(0, 0, 0, 1, 1, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 1, 1, 3)] = rollinfo(7, partials, std::vector<unsigned>({0,0,0,4,5,18,27,0,0,0,0,0,27}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 2, 1);
      p.emplace_back(0, 0, 0, 1, 1, 2);
      p.emplace_back(0, 0, 0, 0, 2, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 1, 2, 2)] = rollinfo(8, partials, std::vector<unsigned>({0,0,0,4,10,12,0,0,0,0,0,0,26}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 2, 1);
      p.emplace_back(0, 0, 0, 1, 3, 0);
      p.emplace_back(0, 0, 0, 0, 3, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 1, 3, 1)] = rollinfo(9, partials, std::vector<unsigned>({0,0,0,4,15,6,25,0,0,0,0,0,25}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 3, 0);
      p.emplace_back(0, 0, 0, 0, 4, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 1, 4, 0)] = rollinfo(10, partials, std::vector<unsigned>({0,0,0,4,20,0,24,24,0,0,0,0,24}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 3);
      p.emplace_back(0, 0, 0, 2, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 2, 0, 3)] = rollinfo(11, partials, std::vector<unsigned>({0,0,0,8,0,18,26,0,25,0,0,0,26}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 2);
      p.emplace_back(0, 0, 0, 2, 1, 1);
      p.emplace_back(0, 0, 0, 1, 1, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 2, 1, 2)] = rollinfo(12, partials, std::vector<unsigned>({0,0,0,8,5,12,0,0,0,0,0,0,25}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 2, 1);
      p.emplace_back(0, 0, 0, 2, 1, 1);
      p.emplace_back(0, 0, 0, 2, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 2, 2, 1)] = rollinfo(13, partials, std::vector<unsigned>({0,0,0,8,10,6,0,0,0,0,0,0,24}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 3, 0);
      p.emplace_back(0, 0, 0, 2, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 2, 3, 0)] = rollinfo(14, partials, std::vector<unsigned>({0,0,0,8,15,0,23,0,25,0,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 3, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 3, 0, 2)] = rollinfo(15, partials, std::vector<unsigned>({0,0,0,12,0,12,24,0,25,0,0,0,24}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 3, 0, 1);
      p.emplace_back(0, 0, 0, 3, 1, 0);
      p.emplace_back(0, 0, 0, 2, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 3, 1, 1)] = rollinfo(16, partials, std::vector<unsigned>({0,0,0,12,5,6,23,0,0,0,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 3, 1, 0);
      p.emplace_back(0, 0, 0, 2, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 3, 2, 0)] = rollinfo(17, partials, std::vector<unsigned>({0,0,0,12,10,0,22,0,25,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 3, 0, 1);
      p.emplace_back(0, 0, 0, 4, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 4, 0, 1)] = rollinfo(18, partials, std::vector<unsigned>({0,0,0,16,0,6,22,22,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 3, 1, 0);
      p.emplace_back(0, 0, 0, 4, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 4, 1, 0)] = rollinfo(19, partials, std::vector<unsigned>({0,0,0,16,5,0,21,21,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 4, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 0, 5, 0, 0)] = rollinfo(20, partials, std::vector<unsigned>({0,0,0,20,0,0,20,20,0,0,0,50,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 3);
      p.emplace_back(0, 0, 0, 0, 0, 4);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 0, 0, 4)] = rollinfo(21, partials, std::vector<unsigned>({0,0,3,0,0,24,27,27,0,0,0,0,27}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 3);
      p.emplace_back(0, 0, 0, 0, 1, 3);
      p.emplace_back(0, 0, 1, 0, 1, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 0, 1, 3)] = rollinfo(22, partials, std::vector<unsigned>({0,0,3,0,5,18,26,0,0,0,0,0,26}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 2, 1);
      p.emplace_back(0, 0, 0, 0, 2, 2);
      p.emplace_back(0, 0, 1, 0, 1, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 0, 2, 2)] = rollinfo(23, partials, std::vector<unsigned>({0,0,3,0,10,12,0,0,0,0,0,0,25}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 2, 1);
      p.emplace_back(0, 0, 1, 0, 3, 0);
      p.emplace_back(0, 0, 0, 0, 3, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 0, 3, 1)] = rollinfo(24, partials, std::vector<unsigned>({0,0,3,0,15,6,24,0,0,0,0,0,24}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 3, 0);
      p.emplace_back(0, 0, 0, 0, 4, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 0, 4, 0)] = rollinfo(25, partials, std::vector<unsigned>({0,0,3,0,20,0,23,23,0,0,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 3);
      p.emplace_back(0, 0, 0, 1, 0, 3);
      p.emplace_back(0, 0, 1, 1, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 1, 0, 3)] = rollinfo(26, partials, std::vector<unsigned>({0,0,3,4,0,18,25,0,0,0,0,0,25}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 2);
      p.emplace_back(0, 0, 1, 1, 1, 1);
      p.emplace_back(0, 0, 0, 1, 1, 2);
      p.emplace_back(0, 0, 1, 0, 1, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 1, 1, 2)] = rollinfo(27, partials, std::vector<unsigned>({0,0,3,4,5,12,0,0,0,40,0,0,24}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 2, 1);
      p.emplace_back(0, 0, 0, 1, 2, 1);
      p.emplace_back(0, 0, 1, 1, 1, 1);
      p.emplace_back(0, 0, 1, 1, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 1, 2, 1)] = rollinfo(28, partials, std::vector<unsigned>({0,0,3,4,10,6,0,0,0,40,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 3, 0);
      p.emplace_back(0, 0, 1, 0, 3, 0);
      p.emplace_back(0, 0, 1, 1, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 1, 3, 0)] = rollinfo(29, partials, std::vector<unsigned>({0,0,3,4,15,0,22,0,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 2);
      p.emplace_back(0, 0, 0, 2, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 2, 0, 2)] = rollinfo(30, partials, std::vector<unsigned>({0,0,3,8,0,12,0,0,0,0,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 0, 1);
      p.emplace_back(0, 0, 1, 2, 1, 0);
      p.emplace_back(0, 0, 0, 2, 1, 1);
      p.emplace_back(0, 0, 1, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 2, 1, 1)] = rollinfo(31, partials, std::vector<unsigned>({0,0,3,8,5,6,0,0,0,40,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 1, 0);
      p.emplace_back(0, 0, 1, 1, 2, 0);
      p.emplace_back(0, 0, 0, 2, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 2, 2, 0)] = rollinfo(32, partials, std::vector<unsigned>({0,0,3,8,10,0,0,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 0, 1);
      p.emplace_back(0, 0, 0, 3, 0, 1);
      p.emplace_back(0, 0, 1, 3, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 3, 0, 1)] = rollinfo(33, partials, std::vector<unsigned>({0,0,3,12,0,6,21,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 3, 0, 0);
      p.emplace_back(0, 0, 1, 2, 1, 0);
      p.emplace_back(0, 0, 0, 3, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 3, 1, 0)] = rollinfo(34, partials, std::vector<unsigned>({0,0,3,12,5,0,20,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 3, 0, 0);
      p.emplace_back(0, 0, 0, 4, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 1, 4, 0, 0)] = rollinfo(35, partials, std::vector<unsigned>({0,0,3,16,0,0,19,19,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 3);
      p.emplace_back(0, 0, 2, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 2, 0, 0, 3)] = rollinfo(36, partials, std::vector<unsigned>({0,0,6,0,0,18,24,0,25,0,0,0,24}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 2);
      p.emplace_back(0, 0, 2, 0, 1, 1);
      p.emplace_back(0, 0, 1, 0, 1, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 2, 0, 1, 2)] = rollinfo(37, partials, std::vector<unsigned>({0,0,6,0,5,12,0,0,0,0,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 2, 1);
      p.emplace_back(0, 0, 2, 0, 2, 0);
      p.emplace_back(0, 0, 2, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 2, 0, 2, 1)] = rollinfo(38, partials, std::vector<unsigned>({0,0,6,0,10,6,0,0,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 3, 0);
      p.emplace_back(0, 0, 2, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 2, 0, 3, 0)] = rollinfo(39, partials, std::vector<unsigned>({0,0,6,0,15,0,21,0,25,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 2);
      p.emplace_back(0, 0, 1, 1, 0, 2);
      p.emplace_back(0, 0, 2, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 2, 1, 0, 2)] = rollinfo(40, partials, std::vector<unsigned>({0,0,6,4,0,12,0,0,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 1, 1, 0);
      p.emplace_back(0, 0, 2, 1, 0, 1);
      p.emplace_back(0, 0, 1, 1, 1, 1);
      p.emplace_back(0, 0, 2, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 2, 1, 1, 1)] = rollinfo(41, partials, std::vector<unsigned>({0,0,6,4,5,6,0,0,0,40,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 1, 1, 0);
      p.emplace_back(0, 0, 2, 0, 2, 0);
      p.emplace_back(0, 0, 1, 1, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 2, 1, 2, 0)] = rollinfo(42, partials, std::vector<unsigned>({0,0,6,4,10,0,0,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 0, 1);
      p.emplace_back(0, 0, 2, 2, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 2, 2, 0, 1)] = rollinfo(43, partials, std::vector<unsigned>({0,0,6,8,0,6,0,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 1, 1, 0);
      p.emplace_back(0, 0, 2, 2, 0, 0);
      p.emplace_back(0, 0, 1, 2, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 2, 2, 1, 0)] = rollinfo(44, partials, std::vector<unsigned>({0,0,6,8,5,0,0,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 2, 0, 0);
      p.emplace_back(0, 0, 1, 3, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 2, 3, 0, 0)] = rollinfo(45, partials, std::vector<unsigned>({0,0,6,12,0,0,18,0,25,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 3, 0, 0, 2)] = rollinfo(46, partials, std::vector<unsigned>({0,0,9,0,0,12,21,0,25,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 1);
      p.emplace_back(0, 0, 3, 0, 1, 0);
      p.emplace_back(0, 0, 2, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 3, 0, 1, 1)] = rollinfo(47, partials, std::vector<unsigned>({0,0,9,0,5,6,20,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 1, 0);
      p.emplace_back(0, 0, 2, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 3, 0, 2, 0)] = rollinfo(48, partials, std::vector<unsigned>({0,0,9,0,10,0,19,0,25,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 1);
      p.emplace_back(0, 0, 3, 1, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 3, 1, 0, 1)] = rollinfo(49, partials, std::vector<unsigned>({0,0,9,4,0,6,19,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 1, 1, 0);
      p.emplace_back(0, 0, 3, 1, 0, 0);
      p.emplace_back(0, 0, 3, 0, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 3, 1, 1, 0)] = rollinfo(50, partials, std::vector<unsigned>({0,0,9,4,5,0,18,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 2, 0, 0);
      p.emplace_back(0, 0, 3, 1, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 3, 2, 0, 0)] = rollinfo(51, partials, std::vector<unsigned>({0,0,9,8,0,0,17,0,25,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 1);
      p.emplace_back(0, 0, 4, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 4, 0, 0, 1)] = rollinfo(52, partials, std::vector<unsigned>({0,0,12,0,0,6,18,18,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 1, 0);
      p.emplace_back(0, 0, 4, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 4, 0, 1, 0)] = rollinfo(53, partials, std::vector<unsigned>({0,0,12,0,5,0,17,17,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 1, 0, 0);
      p.emplace_back(0, 0, 4, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 4, 1, 0, 0)] = rollinfo(54, partials, std::vector<unsigned>({0,0,12,4,0,0,16,16,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 4, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 0, 5, 0, 0, 0)] = rollinfo(55, partials, std::vector<unsigned>({0,0,15,0,0,0,15,15,0,0,0,50,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 3);
      p.emplace_back(0, 0, 0, 0, 0, 4);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 0, 0, 4)] = rollinfo(56, partials, std::vector<unsigned>({0,2,0,0,0,24,26,26,0,0,0,0,26}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 3);
      p.emplace_back(0, 1, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 0, 1, 3);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 0, 1, 3)] = rollinfo(57, partials, std::vector<unsigned>({0,2,0,0,5,18,25,0,0,0,0,0,25}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 2);
      p.emplace_back(0, 1, 0, 0, 2, 1);
      p.emplace_back(0, 1, 0, 0, 1, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 0, 2, 2)] = rollinfo(58, partials, std::vector<unsigned>({0,2,0,0,10,12,0,0,0,0,0,0,24}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 3, 0);
      p.emplace_back(0, 1, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 0, 3, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 0, 3, 1)] = rollinfo(59, partials, std::vector<unsigned>({0,2,0,0,15,6,23,0,0,0,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 3, 0);
      p.emplace_back(0, 0, 0, 0, 4, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 0, 4, 0)] = rollinfo(60, partials, std::vector<unsigned>({0,2,0,0,20,0,22,22,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 1, 0, 2);
      p.emplace_back(0, 1, 0, 0, 0, 3);
      p.emplace_back(0, 0, 0, 1, 0, 3);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 1, 0, 3)] = rollinfo(61, partials, std::vector<unsigned>({0,2,0,4,0,18,24,0,0,0,0,0,24}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 1, 0, 2);
      p.emplace_back(0, 1, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 1, 1, 2);
      p.emplace_back(0, 1, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 1, 1, 2)] = rollinfo(62, partials, std::vector<unsigned>({0,2,0,4,5,12,0,0,0,0,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 2, 1);
      p.emplace_back(0, 1, 0, 0, 2, 1);
      p.emplace_back(0, 1, 0, 1, 2, 0);
      p.emplace_back(0, 1, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 1, 2, 1)] = rollinfo(63, partials, std::vector<unsigned>({0,2,0,4,10,6,0,0,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 3, 0);
      p.emplace_back(0, 0, 0, 1, 3, 0);
      p.emplace_back(0, 1, 0, 1, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 1, 3, 0)] = rollinfo(64, partials, std::vector<unsigned>({0,2,0,4,15,0,21,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 1, 0, 2);
      p.emplace_back(0, 1, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 2, 0, 2)] = rollinfo(65, partials, std::vector<unsigned>({0,2,0,8,0,12,0,0,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 2, 1, 0);
      p.emplace_back(0, 1, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 2, 1, 1);
      p.emplace_back(0, 1, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 2, 1, 1)] = rollinfo(66, partials, std::vector<unsigned>({0,2,0,8,5,6,0,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 2, 1, 0);
      p.emplace_back(0, 1, 0, 1, 2, 0);
      p.emplace_back(0, 0, 0, 2, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 2, 2, 0)] = rollinfo(67, partials, std::vector<unsigned>({0,2,0,8,10,0,0,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 3, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 3, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 3, 0, 1)] = rollinfo(68, partials, std::vector<unsigned>({0,2,0,12,0,6,20,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 2, 1, 0);
      p.emplace_back(0, 1, 0, 3, 0, 0);
      p.emplace_back(0, 0, 0, 3, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 3, 1, 0)] = rollinfo(69, partials, std::vector<unsigned>({0,2,0,12,5,0,19,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 3, 0, 0);
      p.emplace_back(0, 0, 0, 4, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 0, 4, 0, 0)] = rollinfo(70, partials, std::vector<unsigned>({0,2,0,16,0,0,18,18,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 3);
      p.emplace_back(0, 1, 1, 0, 0, 2);
      p.emplace_back(0, 1, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 1, 0, 0, 3)] = rollinfo(71, partials, std::vector<unsigned>({0,2,3,0,0,18,23,0,0,0,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 2);
      p.emplace_back(0, 1, 0, 0, 1, 2);
      p.emplace_back(0, 1, 1, 0, 1, 1);
      p.emplace_back(0, 0, 1, 0, 1, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 1, 0, 1, 2)] = rollinfo(72, partials, std::vector<unsigned>({0,2,3,0,5,12,0,0,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 2, 1);
      p.emplace_back(0, 1, 0, 0, 2, 1);
      p.emplace_back(0, 1, 1, 0, 1, 1);
      p.emplace_back(0, 1, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 1, 0, 2, 1)] = rollinfo(73, partials, std::vector<unsigned>({0,2,3,0,10,6,0,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 3, 0);
      p.emplace_back(0, 0, 1, 0, 3, 0);
      p.emplace_back(0, 1, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 1, 0, 3, 0)] = rollinfo(74, partials, std::vector<unsigned>({0,2,3,0,15,0,20,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 1, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 2);
      p.emplace_back(0, 1, 1, 0, 0, 2);
      p.emplace_back(0, 0, 1, 1, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 1, 1, 0, 2)] = rollinfo(75, partials, std::vector<unsigned>({0,2,3,4,0,12,0,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 1, 0, 1);
      p.emplace_back(0, 1, 1, 1, 1, 0);
      p.emplace_back(0, 1, 1, 0, 1, 1);
      p.emplace_back(0, 1, 0, 1, 1, 1);
      p.emplace_back(0, 0, 1, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 1, 1, 1, 1)] = rollinfo(76, partials, std::vector<unsigned>({0,2,3,4,5,6,0,0,0,40,50,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 2, 0);
      p.emplace_back(0, 1, 1, 1, 1, 0);
      p.emplace_back(0, 1, 0, 1, 2, 0);
      p.emplace_back(0, 1, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 1, 1, 2, 0)] = rollinfo(77, partials, std::vector<unsigned>({0,2,3,4,10,0,0,0,0,40,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 1, 0, 1);
      p.emplace_back(0, 0, 1, 2, 0, 1);
      p.emplace_back(0, 1, 1, 2, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 1, 2, 0, 1)] = rollinfo(78, partials, std::vector<unsigned>({0,2,3,8,0,6,0,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 2, 1, 0);
      p.emplace_back(0, 1, 1, 2, 0, 0);
      p.emplace_back(0, 1, 1, 1, 1, 0);
      p.emplace_back(0, 0, 1, 2, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 1, 2, 1, 0)] = rollinfo(79, partials, std::vector<unsigned>({0,2,3,8,5,0,0,0,0,40,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 3, 0, 0);
      p.emplace_back(0, 1, 1, 2, 0, 0);
      p.emplace_back(0, 0, 1, 3, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 1, 3, 0, 0)] = rollinfo(80, partials, std::vector<unsigned>({0,2,3,12,0,0,17,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 2);
      p.emplace_back(0, 1, 1, 0, 0, 2);
      p.emplace_back(0, 1, 2, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 2, 0, 0, 2)] = rollinfo(81, partials, std::vector<unsigned>({0,2,6,0,0,12,0,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 2, 0, 1, 0);
      p.emplace_back(0, 1, 2, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 1, 1);
      p.emplace_back(0, 0, 2, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 2, 0, 1, 1)] = rollinfo(82, partials, std::vector<unsigned>({0,2,6,0,5,6,0,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 2, 0, 1, 0);
      p.emplace_back(0, 0, 2, 0, 2, 0);
      p.emplace_back(0, 1, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 2, 0, 2, 0)] = rollinfo(83, partials, std::vector<unsigned>({0,2,6,0,10,0,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 1, 0, 1);
      p.emplace_back(0, 1, 2, 1, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 1);
      p.emplace_back(0, 0, 2, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 2, 1, 0, 1)] = rollinfo(84, partials, std::vector<unsigned>({0,2,6,4,0,6,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 2, 0, 1, 0);
      p.emplace_back(0, 1, 2, 1, 0, 0);
      p.emplace_back(0, 1, 1, 1, 1, 0);
      p.emplace_back(0, 0, 2, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 2, 1, 1, 0)] = rollinfo(85, partials, std::vector<unsigned>({0,2,6,4,5,0,0,0,0,40,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 2, 1, 0, 0);
      p.emplace_back(0, 1, 1, 2, 0, 0);
      p.emplace_back(0, 0, 2, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 2, 2, 0, 0)] = rollinfo(86, partials, std::vector<unsigned>({0,2,6,8,0,0,0,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 1);
      p.emplace_back(0, 1, 2, 0, 0, 1);
      p.emplace_back(0, 1, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 3, 0, 0, 1)] = rollinfo(87, partials, std::vector<unsigned>({0,2,9,0,0,6,17,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 2, 0, 1, 0);
      p.emplace_back(0, 0, 3, 0, 1, 0);
      p.emplace_back(0, 1, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 3, 0, 1, 0)] = rollinfo(88, partials, std::vector<unsigned>({0,2,9,0,5,0,16,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 2, 1, 0, 0);
      p.emplace_back(0, 0, 3, 1, 0, 0);
      p.emplace_back(0, 1, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 3, 1, 0, 0)] = rollinfo(89, partials, std::vector<unsigned>({0,2,9,4,0,0,15,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 4, 0, 0, 0);
      p.emplace_back(0, 1, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 1, 4, 0, 0, 0)] = rollinfo(90, partials, std::vector<unsigned>({0,2,12,0,0,0,14,14,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 3);
      p.emplace_back(0, 2, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 0, 0, 0, 3)] = rollinfo(91, partials, std::vector<unsigned>({0,4,0,0,0,18,22,0,25,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 2);
      p.emplace_back(0, 2, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 0, 0, 1, 2)] = rollinfo(92, partials, std::vector<unsigned>({0,4,0,0,5,12,0,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 0, 1, 1);
      p.emplace_back(0, 2, 0, 0, 2, 0);
      p.emplace_back(0, 1, 0, 0, 2, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 0, 0, 2, 1)] = rollinfo(93, partials, std::vector<unsigned>({0,4,0,0,10,6,0,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 3, 0);
      p.emplace_back(0, 2, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 0, 0, 3, 0)] = rollinfo(94, partials, std::vector<unsigned>({0,4,0,0,15,0,19,0,25,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 1, 0, 2);
      p.emplace_back(0, 2, 0, 1, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 0, 1, 0, 2)] = rollinfo(95, partials, std::vector<unsigned>({0,4,0,4,0,12,0,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 0, 1, 1);
      p.emplace_back(0, 2, 0, 1, 0, 1);
      p.emplace_back(0, 2, 0, 1, 1, 0);
      p.emplace_back(0, 1, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 0, 1, 1, 1)] = rollinfo(96, partials, std::vector<unsigned>({0,4,0,4,5,6,0,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 0, 2, 0);
      p.emplace_back(0, 1, 0, 1, 2, 0);
      p.emplace_back(0, 2, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 0, 1, 2, 0)] = rollinfo(97, partials, std::vector<unsigned>({0,4,0,4,10,0,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 2, 0, 1);
      p.emplace_back(0, 2, 0, 1, 0, 1);
      p.emplace_back(0, 2, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 0, 2, 0, 1)] = rollinfo(98, partials, std::vector<unsigned>({0,4,0,8,0,6,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 2, 1, 0);
      p.emplace_back(0, 2, 0, 1, 1, 0);
      p.emplace_back(0, 2, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 0, 2, 1, 0)] = rollinfo(99, partials, std::vector<unsigned>({0,4,0,8,5,0,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 3, 0, 0);
      p.emplace_back(0, 2, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 0, 3, 0, 0)] = rollinfo(100, partials, std::vector<unsigned>({0,4,0,12,0,0,16,0,25,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 2);
      p.emplace_back(0, 2, 1, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 1, 0, 0, 2)] = rollinfo(101, partials, std::vector<unsigned>({0,4,3,0,0,12,0,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 0, 1, 1);
      p.emplace_back(0, 2, 1, 0, 1, 0);
      p.emplace_back(0, 2, 1, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 1, 0, 1, 1)] = rollinfo(102, partials, std::vector<unsigned>({0,4,3,0,5,6,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 0, 2, 0);
      p.emplace_back(0, 2, 1, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 1, 0, 2, 0)] = rollinfo(103, partials, std::vector<unsigned>({0,4,3,0,10,0,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 1, 0, 1);
      p.emplace_back(0, 2, 1, 1, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 1);
      p.emplace_back(0, 2, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 1, 1, 0, 1)] = rollinfo(104, partials, std::vector<unsigned>({0,4,3,4,0,6,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 1, 1, 0);
      p.emplace_back(0, 2, 1, 1, 0, 0);
      p.emplace_back(0, 2, 1, 0, 1, 0);
      p.emplace_back(0, 2, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 1, 1, 1, 0)] = rollinfo(105, partials, std::vector<unsigned>({0,4,3,4,5,0,0,0,0,40,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 2, 0, 0);
      p.emplace_back(0, 2, 1, 1, 0, 0);
      p.emplace_back(0, 2, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 1, 2, 0, 0)] = rollinfo(106, partials, std::vector<unsigned>({0,4,3,8,0,0,0,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 2, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 1);
      p.emplace_back(0, 2, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 2, 0, 0, 1)] = rollinfo(107, partials, std::vector<unsigned>({0,4,6,0,0,6,0,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 2, 0, 1, 0);
      p.emplace_back(0, 2, 2, 0, 0, 0);
      p.emplace_back(0, 2, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 2, 0, 1, 0)] = rollinfo(108, partials, std::vector<unsigned>({0,4,6,0,5,0,0,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 2, 1, 0, 0);
      p.emplace_back(0, 2, 2, 0, 0, 0);
      p.emplace_back(0, 2, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 2, 1, 0, 0)] = rollinfo(109, partials, std::vector<unsigned>({0,4,6,4,0,0,0,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 2, 0, 0, 0);
      p.emplace_back(0, 1, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 2, 3, 0, 0, 0)] = rollinfo(110, partials, std::vector<unsigned>({0,4,9,0,0,0,13,0,25,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 3, 0, 0, 0, 2)] = rollinfo(111, partials, std::vector<unsigned>({0,6,0,0,0,12,18,0,25,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 1, 1);
      p.emplace_back(0, 3, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 3, 0, 0, 1, 1)] = rollinfo(112, partials, std::vector<unsigned>({0,6,0,0,5,6,17,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 3, 0, 0, 2, 0)] = rollinfo(113, partials, std::vector<unsigned>({0,6,0,0,10,0,16,0,25,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 1, 0, 0);
      p.emplace_back(0, 3, 0, 0, 0, 1);
      p.emplace_back(0, 2, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 3, 0, 1, 0, 1)] = rollinfo(114, partials, std::vector<unsigned>({0,6,0,4,0,6,16,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 1, 0);
      p.emplace_back(0, 3, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 3, 0, 1, 1, 0)] = rollinfo(115, partials, std::vector<unsigned>({0,6,0,4,5,0,15,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 3, 0, 2, 0, 0)] = rollinfo(116, partials, std::vector<unsigned>({0,6,0,8,0,0,14,0,25,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 1);
      p.emplace_back(0, 2, 1, 0, 0, 1);
      p.emplace_back(0, 3, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 3, 1, 0, 0, 1)] = rollinfo(117, partials, std::vector<unsigned>({0,6,3,0,0,6,15,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 1, 0);
      p.emplace_back(0, 2, 1, 0, 1, 0);
      p.emplace_back(0, 3, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 3, 1, 0, 1, 0)] = rollinfo(118, partials, std::vector<unsigned>({0,6,3,0,5,0,14,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 1, 0, 0);
      p.emplace_back(0, 2, 1, 1, 0, 0);
      p.emplace_back(0, 3, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 3, 1, 1, 0, 0)] = rollinfo(119, partials, std::vector<unsigned>({0,6,3,4,0,0,13,0,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 2, 0, 0, 0);
      p.emplace_back(0, 3, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 3, 2, 0, 0, 0)] = rollinfo(120, partials, std::vector<unsigned>({0,6,6,0,0,0,12,0,25,0,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 1);
      p.emplace_back(0, 4, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 4, 0, 0, 0, 1)] = rollinfo(121, partials, std::vector<unsigned>({0,8,0,0,0,6,14,14,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 1, 0);
      p.emplace_back(0, 4, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 4, 0, 0, 1, 0)] = rollinfo(122, partials, std::vector<unsigned>({0,8,0,0,5,0,13,13,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 1, 0, 0);
      p.emplace_back(0, 4, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 4, 0, 1, 0, 0)] = rollinfo(123, partials, std::vector<unsigned>({0,8,0,4,0,0,12,12,0,0,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 1, 0, 0, 0);
      p.emplace_back(0, 4, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 4, 1, 0, 0, 0)] = rollinfo(124, partials, std::vector<unsigned>({0,8,3,0,0,0,11,11,0,0,0,0,11}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 4, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(0, 5, 0, 0, 0, 0)] = rollinfo(125, partials, std::vector<unsigned>({0,10,0,0,0,0,10,10,0,0,0,50,10}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 3);
      p.emplace_back(0, 0, 0, 0, 0, 4);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 0, 0, 4)] = rollinfo(126, partials, std::vector<unsigned>({1,0,0,0,0,24,25,25,0,0,0,0,25}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 3);
      p.emplace_back(1, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 0, 1, 3);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 0, 1, 3)] = rollinfo(127, partials, std::vector<unsigned>({1,0,0,0,5,18,24,0,0,0,0,0,24}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 2);
      p.emplace_back(1, 0, 0, 0, 2, 1);
      p.emplace_back(1, 0, 0, 0, 1, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 0, 2, 2)] = rollinfo(128, partials, std::vector<unsigned>({1,0,0,0,10,12,0,0,0,0,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 3, 0);
      p.emplace_back(1, 0, 0, 0, 2, 1);
      p.emplace_back(0, 0, 0, 0, 3, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 0, 3, 1)] = rollinfo(129, partials, std::vector<unsigned>({1,0,0,0,15,6,22,0,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 3, 0);
      p.emplace_back(0, 0, 0, 0, 4, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 0, 4, 0)] = rollinfo(130, partials, std::vector<unsigned>({1,0,0,0,20,0,21,21,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 1, 0, 3);
      p.emplace_back(1, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 1, 0, 3)] = rollinfo(131, partials, std::vector<unsigned>({1,0,0,4,0,18,23,0,0,0,0,0,23}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 1, 0, 2);
      p.emplace_back(1, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 0, 1, 1, 2);
      p.emplace_back(1, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 1, 1, 2)] = rollinfo(132, partials, std::vector<unsigned>({1,0,0,4,5,12,0,0,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 2, 1);
      p.emplace_back(1, 0, 0, 0, 2, 1);
      p.emplace_back(1, 0, 0, 1, 2, 0);
      p.emplace_back(1, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 1, 2, 1)] = rollinfo(133, partials, std::vector<unsigned>({1,0,0,4,10,6,0,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 3, 0);
      p.emplace_back(0, 0, 0, 1, 3, 0);
      p.emplace_back(1, 0, 0, 1, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 1, 3, 0)] = rollinfo(134, partials, std::vector<unsigned>({1,0,0,4,15,0,20,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 1, 0, 2);
      p.emplace_back(1, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 2, 0, 2)] = rollinfo(135, partials, std::vector<unsigned>({1,0,0,8,0,12,0,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 1, 0);
      p.emplace_back(1, 0, 0, 2, 0, 1);
      p.emplace_back(0, 0, 0, 2, 1, 1);
      p.emplace_back(1, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 2, 1, 1)] = rollinfo(136, partials, std::vector<unsigned>({1,0,0,8,5,6,0,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 1, 0);
      p.emplace_back(1, 0, 0, 1, 2, 0);
      p.emplace_back(0, 0, 0, 2, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 2, 2, 0)] = rollinfo(137, partials, std::vector<unsigned>({1,0,0,8,10,0,0,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 3, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 1);
      p.emplace_back(1, 0, 0, 2, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 3, 0, 1)] = rollinfo(138, partials, std::vector<unsigned>({1,0,0,12,0,6,19,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 3, 0, 0);
      p.emplace_back(1, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 0, 3, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 3, 1, 0)] = rollinfo(139, partials, std::vector<unsigned>({1,0,0,12,5,0,18,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 3, 0, 0);
      p.emplace_back(0, 0, 0, 4, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 0, 4, 0, 0)] = rollinfo(140, partials, std::vector<unsigned>({1,0,0,16,0,0,17,17,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 3);
      p.emplace_back(1, 0, 0, 0, 0, 3);
      p.emplace_back(1, 0, 1, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 1, 0, 0, 3)] = rollinfo(141, partials, std::vector<unsigned>({1,0,3,0,0,18,22,0,0,0,0,0,22}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 2);
      p.emplace_back(1, 0, 1, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 2);
      p.emplace_back(0, 0, 1, 0, 1, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 1, 0, 1, 2)] = rollinfo(142, partials, std::vector<unsigned>({1,0,3,0,5,12,0,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 2, 1);
      p.emplace_back(1, 0, 0, 0, 2, 1);
      p.emplace_back(1, 0, 1, 0, 1, 1);
      p.emplace_back(1, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 1, 0, 2, 1)] = rollinfo(143, partials, std::vector<unsigned>({1,0,3,0,10,6,0,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 3, 0);
      p.emplace_back(0, 0, 1, 0, 3, 0);
      p.emplace_back(1, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 1, 0, 3, 0)] = rollinfo(144, partials, std::vector<unsigned>({1,0,3,0,15,0,19,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 1, 0, 2);
      p.emplace_back(1, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 2);
      p.emplace_back(1, 0, 1, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 1, 1, 0, 2)] = rollinfo(145, partials, std::vector<unsigned>({1,0,3,4,0,12,0,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 1, 0, 1);
      p.emplace_back(1, 0, 1, 1, 1, 0);
      p.emplace_back(1, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 1, 1, 1, 1);
      p.emplace_back(1, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 1, 1, 1, 1)] = rollinfo(146, partials, std::vector<unsigned>({1,0,3,4,5,6,0,0,0,40,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 2, 0);
      p.emplace_back(0, 0, 1, 1, 2, 0);
      p.emplace_back(1, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 1, 1, 2, 0)] = rollinfo(147, partials, std::vector<unsigned>({1,0,3,4,10,0,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 2, 0, 1);
      p.emplace_back(1, 0, 1, 1, 0, 1);
      p.emplace_back(1, 0, 0, 2, 0, 1);
      p.emplace_back(1, 0, 1, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 1, 2, 0, 1)] = rollinfo(148, partials, std::vector<unsigned>({1,0,3,8,0,6,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 1, 0);
      p.emplace_back(1, 0, 1, 1, 1, 0);
      p.emplace_back(1, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 1, 2, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 1, 2, 1, 0)] = rollinfo(149, partials, std::vector<unsigned>({1,0,3,8,5,0,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 3, 0, 0);
      p.emplace_back(0, 0, 1, 3, 0, 0);
      p.emplace_back(1, 0, 1, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 1, 3, 0, 0)] = rollinfo(150, partials, std::vector<unsigned>({1,0,3,12,0,0,16,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 2);
      p.emplace_back(1, 0, 2, 0, 0, 1);
      p.emplace_back(1, 0, 1, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 2, 0, 0, 2)] = rollinfo(151, partials, std::vector<unsigned>({1,0,6,0,0,12,0,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 2, 0, 1, 0);
      p.emplace_back(1, 0, 2, 0, 0, 1);
      p.emplace_back(1, 0, 1, 0, 1, 1);
      p.emplace_back(0, 0, 2, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 2, 0, 1, 1)] = rollinfo(152, partials, std::vector<unsigned>({1,0,6,0,5,6,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 2, 0, 1, 0);
      p.emplace_back(0, 0, 2, 0, 2, 0);
      p.emplace_back(1, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 2, 0, 2, 0)] = rollinfo(153, partials, std::vector<unsigned>({1,0,6,0,10,0,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 2, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 1);
      p.emplace_back(1, 0, 2, 0, 0, 1);
      p.emplace_back(0, 0, 2, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 2, 1, 0, 1)] = rollinfo(154, partials, std::vector<unsigned>({1,0,6,4,0,6,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 1, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 2, 1, 0, 0);
      p.emplace_back(1, 0, 2, 0, 1, 0);
      p.emplace_back(1, 0, 1, 1, 1, 0);
      p.emplace_back(0, 0, 2, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 2, 1, 1, 0)] = rollinfo(155, partials, std::vector<unsigned>({1,0,6,4,5,0,0,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 2, 1, 0, 0);
      p.emplace_back(0, 0, 2, 2, 0, 0);
      p.emplace_back(1, 0, 1, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 2, 2, 0, 0)] = rollinfo(156, partials, std::vector<unsigned>({1,0,6,8,0,0,0,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 1);
      p.emplace_back(1, 0, 2, 0, 0, 1);
      p.emplace_back(1, 0, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 3, 0, 0, 1)] = rollinfo(157, partials, std::vector<unsigned>({1,0,9,0,0,6,16,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 2, 0, 1, 0);
      p.emplace_back(0, 0, 3, 0, 1, 0);
      p.emplace_back(1, 0, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 3, 0, 1, 0)] = rollinfo(158, partials, std::vector<unsigned>({1,0,9,0,5,0,15,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 2, 1, 0, 0);
      p.emplace_back(0, 0, 3, 1, 0, 0);
      p.emplace_back(1, 0, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 3, 1, 0, 0)] = rollinfo(159, partials, std::vector<unsigned>({1,0,9,4,0,0,14,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 4, 0, 0, 0);
      p.emplace_back(1, 0, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 0, 4, 0, 0, 0)] = rollinfo(160, partials, std::vector<unsigned>({1,0,12,0,0,0,13,13,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 3);
      p.emplace_back(0, 1, 0, 0, 0, 3);
      p.emplace_back(1, 1, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 0, 0, 0, 3)] = rollinfo(161, partials, std::vector<unsigned>({1,2,0,0,0,18,21,0,0,0,0,0,21}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 2);
      p.emplace_back(1, 0, 0, 0, 1, 2);
      p.emplace_back(1, 1, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 0, 0, 1, 2)] = rollinfo(162, partials, std::vector<unsigned>({1,2,0,0,5,12,0,0,0,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 1, 1);
      p.emplace_back(1, 1, 0, 0, 2, 0);
      p.emplace_back(0, 1, 0, 0, 2, 1);
      p.emplace_back(1, 0, 0, 0, 2, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 0, 0, 2, 1)] = rollinfo(163, partials, std::vector<unsigned>({1,2,0,0,10,6,0,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 3, 0);
      p.emplace_back(1, 0, 0, 0, 3, 0);
      p.emplace_back(1, 1, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 0, 0, 3, 0)] = rollinfo(164, partials, std::vector<unsigned>({1,2,0,0,15,0,18,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 1, 0, 2);
      p.emplace_back(0, 1, 0, 1, 0, 2);
      p.emplace_back(1, 1, 0, 1, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 0, 1, 0, 2)] = rollinfo(165, partials, std::vector<unsigned>({1,2,0,4,0,12,0,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 1, 1, 1);
      p.emplace_back(1, 1, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 1, 1, 1);
      p.emplace_back(1, 1, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 0, 1, 1, 1)] = rollinfo(166, partials, std::vector<unsigned>({1,2,0,4,5,6,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 2, 0);
      p.emplace_back(1, 0, 0, 1, 2, 0);
      p.emplace_back(0, 1, 0, 1, 2, 0);
      p.emplace_back(1, 1, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 0, 1, 2, 0)] = rollinfo(167, partials, std::vector<unsigned>({1,2,0,4,10,0,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 1);
      p.emplace_back(0, 1, 0, 2, 0, 1);
      p.emplace_back(1, 1, 0, 1, 0, 1);
      p.emplace_back(1, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 0, 2, 0, 1)] = rollinfo(168, partials, std::vector<unsigned>({1,2,0,8,0,6,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 2, 1, 0);
      p.emplace_back(1, 0, 0, 2, 1, 0);
      p.emplace_back(1, 1, 0, 2, 0, 0);
      p.emplace_back(1, 1, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 0, 2, 1, 0)] = rollinfo(169, partials, std::vector<unsigned>({1,2,0,8,5,0,0,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 3, 0, 0);
      p.emplace_back(0, 1, 0, 3, 0, 0);
      p.emplace_back(1, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 0, 3, 0, 0)] = rollinfo(170, partials, std::vector<unsigned>({1,2,0,12,0,0,15,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 0, 2);
      p.emplace_back(1, 0, 1, 0, 0, 2);
      p.emplace_back(1, 1, 0, 0, 0, 2);
      p.emplace_back(1, 1, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 1, 0, 0, 2)] = rollinfo(171, partials, std::vector<unsigned>({1,2,3,0,0,12,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 1, 1);
      p.emplace_back(1, 0, 1, 0, 1, 1);
      p.emplace_back(1, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 1, 1);
      p.emplace_back(1, 1, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 1, 0, 1, 1)] = rollinfo(172, partials, std::vector<unsigned>({1,2,3,0,5,6,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 2, 0);
      p.emplace_back(1, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 2, 0);
      p.emplace_back(1, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 1, 0, 2, 0)] = rollinfo(173, partials, std::vector<unsigned>({1,2,3,0,10,0,0,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 1, 0, 1);
      p.emplace_back(1, 0, 1, 1, 0, 1);
      p.emplace_back(1, 1, 0, 1, 0, 1);
      p.emplace_back(1, 1, 1, 1, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 1, 1, 0, 1)] = rollinfo(174, partials, std::vector<unsigned>({1,2,3,4,0,6,0,0,0,40,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 1, 1, 0);
      p.emplace_back(0, 1, 1, 1, 1, 0);
      p.emplace_back(1, 1, 1, 0, 1, 0);
      p.emplace_back(1, 1, 1, 1, 0, 0);
      p.emplace_back(1, 1, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 1, 1, 1, 0)] = rollinfo(175, partials, std::vector<unsigned>({1,2,3,4,5,0,0,0,0,40,50,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 2, 0, 0);
      p.emplace_back(1, 0, 1, 2, 0, 0);
      p.emplace_back(1, 1, 1, 1, 0, 0);
      p.emplace_back(1, 1, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 1, 2, 0, 0)] = rollinfo(176, partials, std::vector<unsigned>({1,2,3,8,0,0,0,0,0,40,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 2, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 1);
      p.emplace_back(1, 0, 2, 0, 0, 1);
      p.emplace_back(1, 1, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 2, 0, 0, 1)] = rollinfo(177, partials, std::vector<unsigned>({1,2,6,0,0,6,0,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 2, 0, 1, 0);
      p.emplace_back(1, 0, 2, 0, 1, 0);
      p.emplace_back(1, 1, 2, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 2, 0, 1, 0)] = rollinfo(178, partials, std::vector<unsigned>({1,2,6,0,5,0,0,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 2, 1, 0, 0);
      p.emplace_back(0, 1, 2, 1, 0, 0);
      p.emplace_back(1, 1, 2, 0, 0, 0);
      p.emplace_back(1, 1, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 2, 1, 0, 0)] = rollinfo(179, partials, std::vector<unsigned>({1,2,6,4,0,0,0,0,0,40,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 2, 0, 0, 0);
      p.emplace_back(0, 1, 3, 0, 0, 0);
      p.emplace_back(1, 0, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 1, 3, 0, 0, 0)] = rollinfo(180, partials, std::vector<unsigned>({1,2,9,0,0,0,12,0,0,0,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 2);
      p.emplace_back(0, 2, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 2, 0, 0, 0, 2)] = rollinfo(181, partials, std::vector<unsigned>({1,4,0,0,0,12,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 0, 1, 1);
      p.emplace_back(1, 2, 0, 0, 1, 0);
      p.emplace_back(1, 2, 0, 0, 0, 1);
      p.emplace_back(1, 1, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 2, 0, 0, 1, 1)] = rollinfo(182, partials, std::vector<unsigned>({1,4,0,0,5,6,0,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 1, 0);
      p.emplace_back(1, 1, 0, 0, 2, 0);
      p.emplace_back(0, 2, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 2, 0, 0, 2, 0)] = rollinfo(183, partials, std::vector<unsigned>({1,4,0,0,10,0,0,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 1, 0, 0);
      p.emplace_back(1, 2, 0, 0, 0, 1);
      p.emplace_back(1, 1, 0, 1, 0, 1);
      p.emplace_back(0, 2, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 2, 0, 1, 0, 1)] = rollinfo(184, partials, std::vector<unsigned>({1,4,0,4,0,6,0,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 1, 0, 0);
      p.emplace_back(1, 2, 0, 0, 1, 0);
      p.emplace_back(0, 2, 0, 1, 1, 0);
      p.emplace_back(1, 1, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 2, 0, 1, 1, 0)] = rollinfo(185, partials, std::vector<unsigned>({1,4,0,4,5,0,0,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 1, 0, 0);
      p.emplace_back(1, 1, 0, 2, 0, 0);
      p.emplace_back(0, 2, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 2, 0, 2, 0, 0)] = rollinfo(186, partials, std::vector<unsigned>({1,4,0,8,0,0,0,0,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 1);
      p.emplace_back(1, 1, 1, 0, 0, 1);
      p.emplace_back(0, 2, 1, 0, 0, 1);
      p.emplace_back(1, 2, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 2, 1, 0, 0, 1)] = rollinfo(187, partials, std::vector<unsigned>({1,4,3,0,0,6,0,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 1, 0);
      p.emplace_back(1, 1, 1, 0, 1, 0);
      p.emplace_back(0, 2, 1, 0, 1, 0);
      p.emplace_back(1, 2, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 2, 1, 0, 1, 0)] = rollinfo(188, partials, std::vector<unsigned>({1,4,3,0,5,0,0,0,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 1, 0, 0);
      p.emplace_back(0, 2, 1, 1, 0, 0);
      p.emplace_back(1, 1, 1, 1, 0, 0);
      p.emplace_back(1, 2, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 2, 1, 1, 0, 0)] = rollinfo(189, partials, std::vector<unsigned>({1,4,3,4,0,0,0,0,0,40,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 2, 0, 0, 0);
      p.emplace_back(0, 2, 2, 0, 0, 0);
      p.emplace_back(1, 2, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 2, 2, 0, 0, 0)] = rollinfo(190, partials, std::vector<unsigned>({1,4,6,0,0,0,0,0,0,0,0,0,11}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 1);
      p.emplace_back(0, 3, 0, 0, 0, 1);
      p.emplace_back(1, 3, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 3, 0, 0, 0, 1)] = rollinfo(191, partials, std::vector<unsigned>({1,6,0,0,0,6,13,0,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 0, 0, 1, 0);
      p.emplace_back(1, 2, 0, 0, 1, 0);
      p.emplace_back(1, 3, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 3, 0, 0, 1, 0)] = rollinfo(192, partials, std::vector<unsigned>({1,6,0,0,5,0,12,0,0,0,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 1, 0, 0);
      p.emplace_back(0, 3, 0, 1, 0, 0);
      p.emplace_back(1, 3, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 3, 0, 1, 0, 0)] = rollinfo(193, partials, std::vector<unsigned>({1,6,0,4,0,0,11,0,0,0,0,0,11}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 3, 1, 0, 0, 0);
      p.emplace_back(1, 3, 0, 0, 0, 0);
      p.emplace_back(1, 2, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 3, 1, 0, 0, 0)] = rollinfo(194, partials, std::vector<unsigned>({1,6,3,0,0,0,10,0,0,0,0,0,10}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 3, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 3, 0, 0, 0, 0);
      p.emplace_back(0, 4, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(1, 4, 0, 0, 0, 0)] = rollinfo(195, partials, std::vector<unsigned>({1,8,0,0,0,0,9,9,0,0,0,0,9}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 0, 0, 0, 3);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 0, 0, 0, 3)] = rollinfo(196, partials, std::vector<unsigned>({2,0,0,0,0,18,20,0,25,0,0,0,20}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 1, 2);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 0, 0, 1, 2);
      p.emplace_back(2, 0, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 0, 0, 1, 2)] = rollinfo(197, partials, std::vector<unsigned>({2,0,0,0,5,12,0,0,0,0,0,0,19}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 1);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 2, 1);
      p.emplace_back(2, 0, 0, 0, 2, 0);
      p.emplace_back(2, 0, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 0, 0, 2, 1)] = rollinfo(198, partials, std::vector<unsigned>({2,0,0,0,10,6,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 0, 0, 3, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 3, 0);
      p.emplace_back(2, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 0, 0, 3, 0)] = rollinfo(199, partials, std::vector<unsigned>({2,0,0,0,15,0,17,0,25,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 2);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 1, 0, 2);
      p.emplace_back(2, 0, 0, 0, 0, 2);
      p.emplace_back(2, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 0, 1, 0, 2)] = rollinfo(200, partials, std::vector<unsigned>({2,0,0,4,0,12,0,0,0,0,0,0,18}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(0, 0, 0, 1, 1, 1);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 1, 1, 0);
      p.emplace_back(2, 0, 0, 1, 0, 1);
      p.emplace_back(2, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 1, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 0, 1, 1, 1)] = rollinfo(201, partials, std::vector<unsigned>({2,0,0,4,5,6,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 2, 0);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 2, 0);
      p.emplace_back(2, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 0, 1, 2, 0)] = rollinfo(202, partials, std::vector<unsigned>({2,0,0,4,10,0,0,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 1);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 2, 0, 1);
      p.emplace_back(2, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 0, 2, 0, 1)] = rollinfo(203, partials, std::vector<unsigned>({2,0,0,8,0,6,0,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 0, 2, 1, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 1, 1, 0);
      p.emplace_back(2, 0, 0, 2, 0, 0);
      p.emplace_back(1, 0, 0, 2, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 0, 2, 1, 0)] = rollinfo(204, partials, std::vector<unsigned>({2,0,0,8,5,0,0,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 3, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 3, 0, 0);
      p.emplace_back(2, 0, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 0, 3, 0, 0)] = rollinfo(205, partials, std::vector<unsigned>({2,0,0,12,0,0,14,0,25,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 2);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 2);
      p.emplace_back(1, 0, 1, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 1, 0, 0, 2)] = rollinfo(206, partials, std::vector<unsigned>({2,0,3,0,0,12,0,0,0,0,0,0,17}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 1, 1);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 1);
      p.emplace_back(2, 0, 1, 0, 1, 0);
      p.emplace_back(1, 0, 1, 0, 1, 1);
      p.emplace_back(2, 0, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 1, 0, 1, 1)] = rollinfo(207, partials, std::vector<unsigned>({2,0,3,0,5,6,0,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 2, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 0, 1, 0, 2, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 2, 0);
      p.emplace_back(1, 0, 1, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 1, 0, 2, 0)] = rollinfo(208, partials, std::vector<unsigned>({2,0,3,0,10,0,0,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 1, 0, 1);
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 1);
      p.emplace_back(1, 0, 1, 1, 0, 1);
      p.emplace_back(2, 0, 1, 1, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 1, 1, 0, 1)] = rollinfo(209, partials, std::vector<unsigned>({2,0,3,4,0,6,0,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(0, 0, 1, 1, 1, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 1, 1, 0);
      p.emplace_back(2, 0, 1, 1, 0, 0);
      p.emplace_back(2, 0, 1, 0, 1, 0);
      p.emplace_back(1, 0, 1, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 1, 1, 1, 0)] = rollinfo(210, partials, std::vector<unsigned>({2,0,3,4,5,0,0,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 0, 1, 2, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 2, 0, 0);
      p.emplace_back(2, 0, 1, 1, 0, 0);
      p.emplace_back(1, 0, 1, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 1, 2, 0, 0)] = rollinfo(211, partials, std::vector<unsigned>({2,0,3,8,0,0,0,0,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(0, 0, 2, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 1);
      p.emplace_back(1, 0, 2, 0, 0, 1);
      p.emplace_back(2, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 2, 0, 0, 1)] = rollinfo(212, partials, std::vector<unsigned>({2,0,6,0,0,6,0,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 2, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 2, 0, 1, 0);
      p.emplace_back(2, 0, 1, 0, 1, 0);
      p.emplace_back(2, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 2, 0, 1, 0)] = rollinfo(213, partials, std::vector<unsigned>({2,0,6,0,5,0,0,0,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 2, 1, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 2, 1, 0, 0);
      p.emplace_back(2, 0, 1, 1, 0, 0);
      p.emplace_back(2, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 2, 1, 0, 0)] = rollinfo(214, partials, std::vector<unsigned>({2,0,6,4,0,0,0,0,0,0,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 3, 0, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 2, 0, 0, 0);
      p.emplace_back(1, 0, 3, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 0, 3, 0, 0, 0)] = rollinfo(215, partials, std::vector<unsigned>({2,0,9,0,0,0,11,0,25,0,0,0,11}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(0, 1, 0, 0, 0, 2);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 0, 0, 2);
      p.emplace_back(2, 1, 0, 0, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 1, 0, 0, 0, 2)] = rollinfo(216, partials, std::vector<unsigned>({2,2,0,0,0,12,0,0,0,0,0,0,16}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(0, 1, 0, 0, 1, 1);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 0, 1, 1);
      p.emplace_back(2, 1, 0, 0, 0, 1);
      p.emplace_back(2, 1, 0, 0, 1, 0);
      p.emplace_back(1, 1, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 1, 0, 0, 1, 1)] = rollinfo(217, partials, std::vector<unsigned>({2,2,0,0,5,6,0,0,0,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(0, 1, 0, 0, 2, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 2, 0);
      p.emplace_back(2, 0, 0, 0, 2, 0);
      p.emplace_back(2, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 1, 0, 0, 2, 0)] = rollinfo(218, partials, std::vector<unsigned>({2,2,0,0,10,0,0,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 1, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 1, 0, 1);
      p.emplace_back(1, 1, 0, 1, 0, 1);
      p.emplace_back(2, 1, 0, 0, 0, 1);
      p.emplace_back(2, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 1, 0, 1, 0, 1)] = rollinfo(219, partials, std::vector<unsigned>({2,2,0,4,0,6,0,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 1, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 1, 1, 0);
      p.emplace_back(1, 1, 0, 1, 1, 0);
      p.emplace_back(2, 1, 0, 0, 1, 0);
      p.emplace_back(2, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 1, 0, 1, 1, 0)] = rollinfo(220, partials, std::vector<unsigned>({2,2,0,4,5,0,0,0,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(0, 1, 0, 2, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 2, 0, 0);
      p.emplace_back(1, 1, 0, 2, 0, 0);
      p.emplace_back(2, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 1, 0, 2, 0, 0)] = rollinfo(221, partials, std::vector<unsigned>({2,2,0,8,0,0,0,0,0,0,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 1);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 1, 1, 0, 0, 0);
      p.emplace_back(2, 0, 1, 0, 0, 1);
      p.emplace_back(2, 1, 0, 0, 0, 1);
      p.emplace_back(1, 1, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 1, 1, 0, 0, 1)] = rollinfo(222, partials, std::vector<unsigned>({2,2,3,0,0,6,0,0,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 1, 0, 1, 0);
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 1, 1, 0, 0, 0);
      p.emplace_back(2, 0, 1, 0, 1, 0);
      p.emplace_back(1, 1, 1, 0, 1, 0);
      p.emplace_back(2, 1, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 1, 1, 0, 1, 0)] = rollinfo(223, partials, std::vector<unsigned>({2,2,3,0,5,0,0,0,0,0,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      p.emplace_back(0, 1, 1, 1, 0, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 1, 1, 0, 0, 0);
      p.emplace_back(2, 0, 1, 1, 0, 0);
      p.emplace_back(1, 1, 1, 1, 0, 0);
      p.emplace_back(2, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 1, 1, 1, 0, 0)] = rollinfo(224, partials, std::vector<unsigned>({2,2,3,4,0,0,0,0,0,40,0,0,11}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(0, 1, 2, 0, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 1, 1, 0, 0, 0);
      p.emplace_back(1, 1, 2, 0, 0, 0);
      p.emplace_back(2, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 1, 2, 0, 0, 0)] = rollinfo(225, partials, std::vector<unsigned>({2,2,6,0,0,0,0,0,0,0,0,0,10}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(0, 2, 0, 0, 0, 1);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 2, 0, 0, 0, 0);
      p.emplace_back(1, 2, 0, 0, 0, 1);
      p.emplace_back(2, 1, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 2, 0, 0, 0, 1)] = rollinfo(226, partials, std::vector<unsigned>({2,4,0,0,0,6,0,0,0,0,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 1, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 2, 0, 0, 0, 0);
      p.emplace_back(2, 1, 0, 0, 1, 0);
      p.emplace_back(1, 2, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 2, 0, 0, 1, 0)] = rollinfo(227, partials, std::vector<unsigned>({2,4,0,0,5,0,0,0,0,0,0,0,11}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 1, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 1, 0, 0);
      p.emplace_back(2, 2, 0, 0, 0, 0);
      p.emplace_back(2, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 2, 0, 1, 0, 0)] = rollinfo(228, partials, std::vector<unsigned>({2,4,0,4,0,0,0,0,0,0,0,0,10}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 2, 1, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 1, 1, 0, 0, 0);
      p.emplace_back(2, 2, 0, 0, 0, 0);
      p.emplace_back(1, 2, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 2, 1, 0, 0, 0)] = rollinfo(229, partials, std::vector<unsigned>({2,4,3,0,0,0,0,0,0,0,0,0,9}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(0, 3, 0, 0, 0, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 2, 0, 0, 0, 0);
      p.emplace_back(1, 3, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(2, 3, 0, 0, 0, 0)] = rollinfo(230, partials, std::vector<unsigned>({2,6,0,0,0,0,8,0,25,0,0,0,8}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 2);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 2);
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 0, 0, 2);
      p.emplace_back(3, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 0, 0, 0, 0, 2)] = rollinfo(231, partials, std::vector<unsigned>({3,0,0,0,0,12,15,0,25,0,0,0,15}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 1);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 1, 0);
      p.emplace_back(3, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 1, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 0, 0, 0, 1, 1)] = rollinfo(232, partials, std::vector<unsigned>({3,0,0,0,5,6,14,0,0,0,0,0,14}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 2, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 2, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 0, 0, 0, 2, 0)] = rollinfo(233, partials, std::vector<unsigned>({3,0,0,0,10,0,13,0,25,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 1, 0, 1);
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 1, 0, 0);
      p.emplace_back(3, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 1, 0, 1);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 0, 0, 1, 0, 1)] = rollinfo(234, partials, std::vector<unsigned>({3,0,0,4,0,6,13,0,0,0,0,0,13}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 1, 1, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 1, 0, 0);
      p.emplace_back(3, 0, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 1, 1, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 0, 0, 1, 1, 0)] = rollinfo(235, partials, std::vector<unsigned>({3,0,0,4,5,0,12,0,0,0,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 2, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 2, 0, 0);
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 1, 0, 0);
      p.emplace_back(2, 0, 0, 2, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 0, 0, 2, 0, 0)] = rollinfo(236, partials, std::vector<unsigned>({3,0,0,8,0,0,11,0,25,0,0,0,11}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 1);
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 1);
      p.emplace_back(3, 0, 0, 0, 0, 1);
      p.emplace_back(3, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 0, 1, 0, 0, 1)] = rollinfo(237, partials, std::vector<unsigned>({3,0,3,0,0,6,12,0,0,0,0,0,12}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 1, 0);
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 1, 0);
      p.emplace_back(2, 0, 1, 0, 1, 0);
      p.emplace_back(3, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 0, 1, 0, 1, 0)] = rollinfo(238, partials, std::vector<unsigned>({3,0,3,0,5,0,11,0,0,0,0,0,11}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 0, 1, 1, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(1, 0, 1, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 1, 0, 0);
      p.emplace_back(2, 0, 1, 1, 0, 0);
      p.emplace_back(3, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 0, 1, 1, 0, 0)] = rollinfo(239, partials, std::vector<unsigned>({3,0,3,4,0,0,10,0,0,0,0,0,10}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 2, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 2, 0, 0, 0);
      p.emplace_back(3, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 0, 2, 0, 0, 0)] = rollinfo(240, partials, std::vector<unsigned>({3,0,6,0,0,0,9,0,25,0,0,0,9}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(0, 1, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      p.emplace_back(1, 1, 0, 0, 0, 1);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 1);
      p.emplace_back(2, 1, 0, 0, 0, 1);
      p.emplace_back(3, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 1, 0, 0, 0, 1)] = rollinfo(241, partials, std::vector<unsigned>({3,2,0,0,0,6,11,0,0,0,0,0,11}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(0, 1, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(1, 1, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 1, 0);
      p.emplace_back(2, 1, 0, 0, 1, 0);
      p.emplace_back(3, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 1, 0, 0, 1, 0)] = rollinfo(242, partials, std::vector<unsigned>({3,2,0,0,5,0,10,0,0,0,0,0,10}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      p.emplace_back(0, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      p.emplace_back(1, 1, 0, 1, 0, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 1, 0, 0);
      p.emplace_back(3, 1, 0, 0, 0, 0);
      p.emplace_back(2, 1, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 1, 0, 1, 0, 0)] = rollinfo(243, partials, std::vector<unsigned>({3,2,0,4,0,0,9,0,0,0,0,0,9}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(0, 1, 1, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(1, 1, 1, 0, 0, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 1, 1, 0, 0, 0);
      p.emplace_back(3, 1, 0, 0, 0, 0);
      p.emplace_back(3, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 1, 1, 0, 0, 0)] = rollinfo(244, partials, std::vector<unsigned>({3,2,3,0,0,0,8,0,0,0,0,0,8}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(0, 2, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 2, 0, 0, 0, 0);
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 2, 0, 0, 0, 0);
      p.emplace_back(3, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(3, 2, 0, 0, 0, 0)] = rollinfo(245, partials, std::vector<unsigned>({3,4,0,0,0,0,7,0,25,0,0,0,7}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 0, 1);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 1);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 1);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 1);
      p.emplace_back(4, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(4, 0, 0, 0, 0, 1)] = rollinfo(246, partials, std::vector<unsigned>({4,0,0,0,0,6,10,10,0,0,0,0,10}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 0, 0, 1, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 1, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 1, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 1, 0);
      p.emplace_back(4, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(4, 0, 0, 0, 1, 0)] = rollinfo(247, partials, std::vector<unsigned>({4,0,0,0,5,0,9,9,0,0,0,0,9}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 0);
      p.emplace_back(0, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 1, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 1, 0, 0);
      p.emplace_back(4, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(4, 0, 0, 1, 0, 0)] = rollinfo(248, partials, std::vector<unsigned>({4,0,0,4,0,0,8,8,0,0,0,0,8}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 0, 1, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 1, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 1, 0, 0, 0);
      p.emplace_back(3, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(4, 0, 0, 0, 0, 0);
      p.emplace_back(3, 0, 1, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(4, 0, 1, 0, 0, 0)] = rollinfo(249, partials, std::vector<unsigned>({4,0,3,0,0,0,7,7,0,0,0,0,7}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(0, 1, 0, 0, 0, 0);
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 1, 0, 0, 0, 0);
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      p.emplace_back(2, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(4, 0, 0, 0, 0, 0);
      p.emplace_back(3, 1, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(4, 1, 0, 0, 0, 0)] = rollinfo(250, partials, std::vector<unsigned>({4,2,0,0,0,0,6,6,0,0,0,0,6}));
  }
  {
    std::vector< std::vector< diceroll > > partials;
    {
      std::vector< diceroll > p;
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(1, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(2, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(3, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    {
      std::vector< diceroll > p;
      p.emplace_back(4, 0, 0, 0, 0, 0);
      partials.emplace_back(p);
    }
    ret[diceroll(5, 0, 0, 0, 0, 0)] = rollinfo(251, partials, std::vector<unsigned>({5,0,0,0,0,0,5,5,0,0,0,50,5}));
  }
  return ret;
}
std::vector< diceroll > MakeReverseRollInfos() {
  std::vector< diceroll > ret;
  ret.emplace_back(0, 0, 0, 0, 0, 5);
  ret.emplace_back(0, 0, 0, 0, 1, 4);
  ret.emplace_back(0, 0, 0, 0, 2, 3);
  ret.emplace_back(0, 0, 0, 0, 3, 2);
  ret.emplace_back(0, 0, 0, 0, 4, 1);
  ret.emplace_back(0, 0, 0, 0, 5, 0);
  ret.emplace_back(0, 0, 0, 1, 0, 4);
  ret.emplace_back(0, 0, 0, 1, 1, 3);
  ret.emplace_back(0, 0, 0, 1, 2, 2);
  ret.emplace_back(0, 0, 0, 1, 3, 1);
  ret.emplace_back(0, 0, 0, 1, 4, 0);
  ret.emplace_back(0, 0, 0, 2, 0, 3);
  ret.emplace_back(0, 0, 0, 2, 1, 2);
  ret.emplace_back(0, 0, 0, 2, 2, 1);
  ret.emplace_back(0, 0, 0, 2, 3, 0);
  ret.emplace_back(0, 0, 0, 3, 0, 2);
  ret.emplace_back(0, 0, 0, 3, 1, 1);
  ret.emplace_back(0, 0, 0, 3, 2, 0);
  ret.emplace_back(0, 0, 0, 4, 0, 1);
  ret.emplace_back(0, 0, 0, 4, 1, 0);
  ret.emplace_back(0, 0, 0, 5, 0, 0);
  ret.emplace_back(0, 0, 1, 0, 0, 4);
  ret.emplace_back(0, 0, 1, 0, 1, 3);
  ret.emplace_back(0, 0, 1, 0, 2, 2);
  ret.emplace_back(0, 0, 1, 0, 3, 1);
  ret.emplace_back(0, 0, 1, 0, 4, 0);
  ret.emplace_back(0, 0, 1, 1, 0, 3);
  ret.emplace_back(0, 0, 1, 1, 1, 2);
  ret.emplace_back(0, 0, 1, 1, 2, 1);
  ret.emplace_back(0, 0, 1, 1, 3, 0);
  ret.emplace_back(0, 0, 1, 2, 0, 2);
  ret.emplace_back(0, 0, 1, 2, 1, 1);
  ret.emplace_back(0, 0, 1, 2, 2, 0);
  ret.emplace_back(0, 0, 1, 3, 0, 1);
  ret.emplace_back(0, 0, 1, 3, 1, 0);
  ret.emplace_back(0, 0, 1, 4, 0, 0);
  ret.emplace_back(0, 0, 2, 0, 0, 3);
  ret.emplace_back(0, 0, 2, 0, 1, 2);
  ret.emplace_back(0, 0, 2, 0, 2, 1);
  ret.emplace_back(0, 0, 2, 0, 3, 0);
  ret.emplace_back(0, 0, 2, 1, 0, 2);
  ret.emplace_back(0, 0, 2, 1, 1, 1);
  ret.emplace_back(0, 0, 2, 1, 2, 0);
  ret.emplace_back(0, 0, 2, 2, 0, 1);
  ret.emplace_back(0, 0, 2, 2, 1, 0);
  ret.emplace_back(0, 0, 2, 3, 0, 0);
  ret.emplace_back(0, 0, 3, 0, 0, 2);
  ret.emplace_back(0, 0, 3, 0, 1, 1);
  ret.emplace_back(0, 0, 3, 0, 2, 0);
  ret.emplace_back(0, 0, 3, 1, 0, 1);
  ret.emplace_back(0, 0, 3, 1, 1, 0);
  ret.emplace_back(0, 0, 3, 2, 0, 0);
  ret.emplace_back(0, 0, 4, 0, 0, 1);
  ret.emplace_back(0, 0, 4, 0, 1, 0);
  ret.emplace_back(0, 0, 4, 1, 0, 0);
  ret.emplace_back(0, 0, 5, 0, 0, 0);
  ret.emplace_back(0, 1, 0, 0, 0, 4);
  ret.emplace_back(0, 1, 0, 0, 1, 3);
  ret.emplace_back(0, 1, 0, 0, 2, 2);
  ret.emplace_back(0, 1, 0, 0, 3, 1);
  ret.emplace_back(0, 1, 0, 0, 4, 0);
  ret.emplace_back(0, 1, 0, 1, 0, 3);
  ret.emplace_back(0, 1, 0, 1, 1, 2);
  ret.emplace_back(0, 1, 0, 1, 2, 1);
  ret.emplace_back(0, 1, 0, 1, 3, 0);
  ret.emplace_back(0, 1, 0, 2, 0, 2);
  ret.emplace_back(0, 1, 0, 2, 1, 1);
  ret.emplace_back(0, 1, 0, 2, 2, 0);
  ret.emplace_back(0, 1, 0, 3, 0, 1);
  ret.emplace_back(0, 1, 0, 3, 1, 0);
  ret.emplace_back(0, 1, 0, 4, 0, 0);
  ret.emplace_back(0, 1, 1, 0, 0, 3);
  ret.emplace_back(0, 1, 1, 0, 1, 2);
  ret.emplace_back(0, 1, 1, 0, 2, 1);
  ret.emplace_back(0, 1, 1, 0, 3, 0);
  ret.emplace_back(0, 1, 1, 1, 0, 2);
  ret.emplace_back(0, 1, 1, 1, 1, 1);
  ret.emplace_back(0, 1, 1, 1, 2, 0);
  ret.emplace_back(0, 1, 1, 2, 0, 1);
  ret.emplace_back(0, 1, 1, 2, 1, 0);
  ret.emplace_back(0, 1, 1, 3, 0, 0);
  ret.emplace_back(0, 1, 2, 0, 0, 2);
  ret.emplace_back(0, 1, 2, 0, 1, 1);
  ret.emplace_back(0, 1, 2, 0, 2, 0);
  ret.emplace_back(0, 1, 2, 1, 0, 1);
  ret.emplace_back(0, 1, 2, 1, 1, 0);
  ret.emplace_back(0, 1, 2, 2, 0, 0);
  ret.emplace_back(0, 1, 3, 0, 0, 1);
  ret.emplace_back(0, 1, 3, 0, 1, 0);
  ret.emplace_back(0, 1, 3, 1, 0, 0);
  ret.emplace_back(0, 1, 4, 0, 0, 0);
  ret.emplace_back(0, 2, 0, 0, 0, 3);
  ret.emplace_back(0, 2, 0, 0, 1, 2);
  ret.emplace_back(0, 2, 0, 0, 2, 1);
  ret.emplace_back(0, 2, 0, 0, 3, 0);
  ret.emplace_back(0, 2, 0, 1, 0, 2);
  ret.emplace_back(0, 2, 0, 1, 1, 1);
  ret.emplace_back(0, 2, 0, 1, 2, 0);
  ret.emplace_back(0, 2, 0, 2, 0, 1);
  ret.emplace_back(0, 2, 0, 2, 1, 0);
  ret.emplace_back(0, 2, 0, 3, 0, 0);
  ret.emplace_back(0, 2, 1, 0, 0, 2);
  ret.emplace_back(0, 2, 1, 0, 1, 1);
  ret.emplace_back(0, 2, 1, 0, 2, 0);
  ret.emplace_back(0, 2, 1, 1, 0, 1);
  ret.emplace_back(0, 2, 1, 1, 1, 0);
  ret.emplace_back(0, 2, 1, 2, 0, 0);
  ret.emplace_back(0, 2, 2, 0, 0, 1);
  ret.emplace_back(0, 2, 2, 0, 1, 0);
  ret.emplace_back(0, 2, 2, 1, 0, 0);
  ret.emplace_back(0, 2, 3, 0, 0, 0);
  ret.emplace_back(0, 3, 0, 0, 0, 2);
  ret.emplace_back(0, 3, 0, 0, 1, 1);
  ret.emplace_back(0, 3, 0, 0, 2, 0);
  ret.emplace_back(0, 3, 0, 1, 0, 1);
  ret.emplace_back(0, 3, 0, 1, 1, 0);
  ret.emplace_back(0, 3, 0, 2, 0, 0);
  ret.emplace_back(0, 3, 1, 0, 0, 1);
  ret.emplace_back(0, 3, 1, 0, 1, 0);
  ret.emplace_back(0, 3, 1, 1, 0, 0);
  ret.emplace_back(0, 3, 2, 0, 0, 0);
  ret.emplace_back(0, 4, 0, 0, 0, 1);
  ret.emplace_back(0, 4, 0, 0, 1, 0);
  ret.emplace_back(0, 4, 0, 1, 0, 0);
  ret.emplace_back(0, 4, 1, 0, 0, 0);
  ret.emplace_back(0, 5, 0, 0, 0, 0);
  ret.emplace_back(1, 0, 0, 0, 0, 4);
  ret.emplace_back(1, 0, 0, 0, 1, 3);
  ret.emplace_back(1, 0, 0, 0, 2, 2);
  ret.emplace_back(1, 0, 0, 0, 3, 1);
  ret.emplace_back(1, 0, 0, 0, 4, 0);
  ret.emplace_back(1, 0, 0, 1, 0, 3);
  ret.emplace_back(1, 0, 0, 1, 1, 2);
  ret.emplace_back(1, 0, 0, 1, 2, 1);
  ret.emplace_back(1, 0, 0, 1, 3, 0);
  ret.emplace_back(1, 0, 0, 2, 0, 2);
  ret.emplace_back(1, 0, 0, 2, 1, 1);
  ret.emplace_back(1, 0, 0, 2, 2, 0);
  ret.emplace_back(1, 0, 0, 3, 0, 1);
  ret.emplace_back(1, 0, 0, 3, 1, 0);
  ret.emplace_back(1, 0, 0, 4, 0, 0);
  ret.emplace_back(1, 0, 1, 0, 0, 3);
  ret.emplace_back(1, 0, 1, 0, 1, 2);
  ret.emplace_back(1, 0, 1, 0, 2, 1);
  ret.emplace_back(1, 0, 1, 0, 3, 0);
  ret.emplace_back(1, 0, 1, 1, 0, 2);
  ret.emplace_back(1, 0, 1, 1, 1, 1);
  ret.emplace_back(1, 0, 1, 1, 2, 0);
  ret.emplace_back(1, 0, 1, 2, 0, 1);
  ret.emplace_back(1, 0, 1, 2, 1, 0);
  ret.emplace_back(1, 0, 1, 3, 0, 0);
  ret.emplace_back(1, 0, 2, 0, 0, 2);
  ret.emplace_back(1, 0, 2, 0, 1, 1);
  ret.emplace_back(1, 0, 2, 0, 2, 0);
  ret.emplace_back(1, 0, 2, 1, 0, 1);
  ret.emplace_back(1, 0, 2, 1, 1, 0);
  ret.emplace_back(1, 0, 2, 2, 0, 0);
  ret.emplace_back(1, 0, 3, 0, 0, 1);
  ret.emplace_back(1, 0, 3, 0, 1, 0);
  ret.emplace_back(1, 0, 3, 1, 0, 0);
  ret.emplace_back(1, 0, 4, 0, 0, 0);
  ret.emplace_back(1, 1, 0, 0, 0, 3);
  ret.emplace_back(1, 1, 0, 0, 1, 2);
  ret.emplace_back(1, 1, 0, 0, 2, 1);
  ret.emplace_back(1, 1, 0, 0, 3, 0);
  ret.emplace_back(1, 1, 0, 1, 0, 2);
  ret.emplace_back(1, 1, 0, 1, 1, 1);
  ret.emplace_back(1, 1, 0, 1, 2, 0);
  ret.emplace_back(1, 1, 0, 2, 0, 1);
  ret.emplace_back(1, 1, 0, 2, 1, 0);
  ret.emplace_back(1, 1, 0, 3, 0, 0);
  ret.emplace_back(1, 1, 1, 0, 0, 2);
  ret.emplace_back(1, 1, 1, 0, 1, 1);
  ret.emplace_back(1, 1, 1, 0, 2, 0);
  ret.emplace_back(1, 1, 1, 1, 0, 1);
  ret.emplace_back(1, 1, 1, 1, 1, 0);
  ret.emplace_back(1, 1, 1, 2, 0, 0);
  ret.emplace_back(1, 1, 2, 0, 0, 1);
  ret.emplace_back(1, 1, 2, 0, 1, 0);
  ret.emplace_back(1, 1, 2, 1, 0, 0);
  ret.emplace_back(1, 1, 3, 0, 0, 0);
  ret.emplace_back(1, 2, 0, 0, 0, 2);
  ret.emplace_back(1, 2, 0, 0, 1, 1);
  ret.emplace_back(1, 2, 0, 0, 2, 0);
  ret.emplace_back(1, 2, 0, 1, 0, 1);
  ret.emplace_back(1, 2, 0, 1, 1, 0);
  ret.emplace_back(1, 2, 0, 2, 0, 0);
  ret.emplace_back(1, 2, 1, 0, 0, 1);
  ret.emplace_back(1, 2, 1, 0, 1, 0);
  ret.emplace_back(1, 2, 1, 1, 0, 0);
  ret.emplace_back(1, 2, 2, 0, 0, 0);
  ret.emplace_back(1, 3, 0, 0, 0, 1);
  ret.emplace_back(1, 3, 0, 0, 1, 0);
  ret.emplace_back(1, 3, 0, 1, 0, 0);
  ret.emplace_back(1, 3, 1, 0, 0, 0);
  ret.emplace_back(1, 4, 0, 0, 0, 0);
  ret.emplace_back(2, 0, 0, 0, 0, 3);
  ret.emplace_back(2, 0, 0, 0, 1, 2);
  ret.emplace_back(2, 0, 0, 0, 2, 1);
  ret.emplace_back(2, 0, 0, 0, 3, 0);
  ret.emplace_back(2, 0, 0, 1, 0, 2);
  ret.emplace_back(2, 0, 0, 1, 1, 1);
  ret.emplace_back(2, 0, 0, 1, 2, 0);
  ret.emplace_back(2, 0, 0, 2, 0, 1);
  ret.emplace_back(2, 0, 0, 2, 1, 0);
  ret.emplace_back(2, 0, 0, 3, 0, 0);
  ret.emplace_back(2, 0, 1, 0, 0, 2);
  ret.emplace_back(2, 0, 1, 0, 1, 1);
  ret.emplace_back(2, 0, 1, 0, 2, 0);
  ret.emplace_back(2, 0, 1, 1, 0, 1);
  ret.emplace_back(2, 0, 1, 1, 1, 0);
  ret.emplace_back(2, 0, 1, 2, 0, 0);
  ret.emplace_back(2, 0, 2, 0, 0, 1);
  ret.emplace_back(2, 0, 2, 0, 1, 0);
  ret.emplace_back(2, 0, 2, 1, 0, 0);
  ret.emplace_back(2, 0, 3, 0, 0, 0);
  ret.emplace_back(2, 1, 0, 0, 0, 2);
  ret.emplace_back(2, 1, 0, 0, 1, 1);
  ret.emplace_back(2, 1, 0, 0, 2, 0);
  ret.emplace_back(2, 1, 0, 1, 0, 1);
  ret.emplace_back(2, 1, 0, 1, 1, 0);
  ret.emplace_back(2, 1, 0, 2, 0, 0);
  ret.emplace_back(2, 1, 1, 0, 0, 1);
  ret.emplace_back(2, 1, 1, 0, 1, 0);
  ret.emplace_back(2, 1, 1, 1, 0, 0);
  ret.emplace_back(2, 1, 2, 0, 0, 0);
  ret.emplace_back(2, 2, 0, 0, 0, 1);
  ret.emplace_back(2, 2, 0, 0, 1, 0);
  ret.emplace_back(2, 2, 0, 1, 0, 0);
  ret.emplace_back(2, 2, 1, 0, 0, 0);
  ret.emplace_back(2, 3, 0, 0, 0, 0);
  ret.emplace_back(3, 0, 0, 0, 0, 2);
  ret.emplace_back(3, 0, 0, 0, 1, 1);
  ret.emplace_back(3, 0, 0, 0, 2, 0);
  ret.emplace_back(3, 0, 0, 1, 0, 1);
  ret.emplace_back(3, 0, 0, 1, 1, 0);
  ret.emplace_back(3, 0, 0, 2, 0, 0);
  ret.emplace_back(3, 0, 1, 0, 0, 1);
  ret.emplace_back(3, 0, 1, 0, 1, 0);
  ret.emplace_back(3, 0, 1, 1, 0, 0);
  ret.emplace_back(3, 0, 2, 0, 0, 0);
  ret.emplace_back(3, 1, 0, 0, 0, 1);
  ret.emplace_back(3, 1, 0, 0, 1, 0);
  ret.emplace_back(3, 1, 0, 1, 0, 0);
  ret.emplace_back(3, 1, 1, 0, 0, 0);
  ret.emplace_back(3, 2, 0, 0, 0, 0);
  ret.emplace_back(4, 0, 0, 0, 0, 1);
  ret.emplace_back(4, 0, 0, 0, 1, 0);
  ret.emplace_back(4, 0, 0, 1, 0, 0);
  ret.emplace_back(4, 0, 1, 0, 0, 0);
  ret.emplace_back(4, 1, 0, 0, 0, 0);
  ret.emplace_back(5, 0, 0, 0, 0, 0);
  return ret;
}
} // namespace dice
