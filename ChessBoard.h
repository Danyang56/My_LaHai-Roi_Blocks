#pragma once
#include <vector>
#include "BlockSets.h"

struct SquareInBoard {
  bool isOccupied = false;
  Color CurrentColor;
  
};

class ChessBoard {
private:
  std::vector<std::vector<SquareInBoard>> Squares;
  int Height;
  int Width;

  ChessBoard(int h,int w);
  ~ChessBoard();

public:
  bool CheckIfColFull(int rank);
  bool CheckIfLineFull(int line);

  bool TryToPutBlocks(int rank, int line, const BlockSets& theSet);
};