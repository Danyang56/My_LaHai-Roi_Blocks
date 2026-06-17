#pragma once
#include <utility>
#include <vector>

enum class Color { Red, Green, Yellow, Blue };

class BlockSets {
private:
  // 保存这个方块组合的形状，用整数坐标表示哪些地方有方块
  std::vector<std::pair<int, int>> BlockSets;
  Color myColor;
  
public:
  std::vector<std::pair<int, int>> GetSet() const { return BlockSets; }
  Color GetColor() const { return myColor; }
  
};