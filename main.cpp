#include "matrix.h"
#include "menu.h"
#include <iostream>
#include <vector>

int main() {
  int rowColCount;
  std::vector<int> rowHints;
  std::vector<int> colHints;
  std::cout << "number of rows/cols?";
  std::cin >> rowColCount;
  std::cout << "hints?";
  for (size_t i = 0; i < rowColCount; ++i) {
    int x;
    std::cin >> x;
    rowHints.push_back(x);
  }
  for (size_t j = 0; j < rowColCount; ++j) {
    int y;
    std::cin >> y;
    colHints.push_back(y);
  }
  Game *game(rowColCount, rowHints, colHints) = new Game;
  delete game;
}
