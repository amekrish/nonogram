#include "menu.h"

void printMatrix() {
  //
}

void printOptions(Matrix *current) {
  Choices *tempOpt = new Choices;
  std::cout
      << "What is the row number of the square you would like to change?\n";
  tempOpt->row = getMenuChoice(current->rowCount());
  std::cout
      << "What is the column number of the square you would like to change?\n";
  tempOpt->col = getMenuChoice(current->colCount());
  std::cout << "Would you like to make the square empty, filled in, or crossed "
               "out?\n";
  tempOpt->val = getMenuChoice(2);
  current->changeSquareState(tempOpt->row, tempOpt->col, tempOpt->val);
  std::cout << "Action completed!\n";
  delete tempOpt;
}

int getMenuChoice(int max) {
  int tempNum;
  // check if it's an int
  std::cin >> tempNum;
  while (true) {
    if (tempNum >= 0 && tempNum <= max) {
      return tempNum;
    }
    std::cout << "Invalid input; please try again\n";
    std::cin >> tempNum;
  }
}
