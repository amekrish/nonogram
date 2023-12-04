#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
class Matrix {
public:
  // constructor if hints included
  Matrix(std::vector<std::vector<int>> rowHintVect,
         std::vector<std::vector<int>> colHintVect);
  // constructor for blank (free play)
  Matrix(int rowNum, int colNum);
  // returns this row
  std::vector<int> row(int num);
  // returns this col
  std::vector<int> col(int num);
  // returns this square's state (empty, filled, crossed out)
  int squareState(int row, int col);
  // returns row count
  int rowCount();
  // returns column count
  int colCount();
  // changes square state
  void changeSquareState(int row, int col, int val);
  // return row hints vector
  std::vector<std::vector<int>> &rowHintFunction();
  // return column hints vector
  std::vector<std::vector<int>> &colHintFunction();
  // sets entire vector to zeroes
  void setZero();

private:
  // contains all squares in the format [row][col]
  std::vector<std::vector<int>> mat;
  std::vector<std::vector<int>> rowHints;
  std::vector<std::vector<int>> colHints;
};
#endif
