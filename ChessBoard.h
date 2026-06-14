#pragma once
#include <vector>
#include "BlockSets.h"

struct SquareInBoard {};

class ChessBoard {
private:
  std::vector<std::vector<SquareInBoard>> Squares;
  ChessBoard();
  ~ChessBoard();

public:
  bool CheckIfRankFull(int rank_number);
  bool CheckIfLineFull(int line_number);

  bool TryToPutBlocks(int rank, int line);
};