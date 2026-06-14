#pragma once
#include <vector>

struct SquareInBoard {};

class ChessBoardBase {
private:
  std::vector<SquareInBoard> Squares;
};