#pragma once
#include <utility>
#include <vector>

class BlockSets {
private:
  std::vector<std::pair<int, int>> BlockSets;

public:
  bool CheckIfRankFull(int rank_number);
  bool CheckIfLineFull(int line_number);
  
};