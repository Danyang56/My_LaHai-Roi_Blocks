#include "ChessBoard.h"
#include "BlockSets.h"
#include <queue>

ChessBoard::ChessBoard(int h, int w) : Height(h), Width(w) {
  Squares.resize(Height);
  for (auto i : Squares) {
    i.resize(Width);
  }
}

ChessBoard::~ChessBoard() {}

bool ChessBoard::CheckIfLineFull(int line) {
  for (auto i : Squares[line]) {
    if (!i.isOccupied) {
      return false;
    }
  }
  return true;
}

bool ChessBoard::CheckIfColFull(int col) {
  for (int i = 0; i < Height; ++i) {
    if (!Squares[i][col].isOccupied) {
      return false;
    }
  }
  return true;
}

bool ChessBoard::TryToPutBlocks(int line, int col, const BlockSets &theSet) {
  for (auto i : theSet.GetSet()) {
    if (line + i.first < 0 || line + i.first > Width - 1 ||
        col + i.second < 0 || col + i.second > Height - 1) {
      return false;
    } else if (Squares[line + i.first][col + i.second].isOccupied) {
      return false;
    }
  }
  for (auto i : theSet.GetSet()) {
    Squares[line + i.first][col + i.second].isOccupied = true;
    Squares[line + i.first][col + i.second].CurrentColor = theSet.GetColor();
  }
  return true;
}
