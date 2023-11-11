#include "matrix.h"

Matrix::Matrix(std::vector<std::vector<int>> rowHintVect,
               std::vector<std::vector<int>> colHintVect) {
  this->rowHintFunction() = rowHintVect;
  this->colHintFunction() = colHintVect;
  int tempRowNum = rowHintVect.size();
  int tempColNum = colHintVect.size();
  this->mat.resize(rowHintVect.size());
  for (int i = 0; i < rowHintVect.size(); ++i) {
    this->mat[i].resize(colHintVect.size());
  }
  // fill matrix with zeroes
  this->setZero();
}

Matrix::Matrix(int rowNum, int colNum) {
  //
}

std::vector<int> Matrix::row(int num) { return this->mat[num]; }

std::vector<int> Matrix::col(int num) {
  std::vector<int> temp;
  temp.reserve(this->rowCount());
  for (int i = 0; i < this->rowCount(); ++i) {
    temp.push_back(this->mat[i][num]);
  }
  return temp;
}

int Matrix::squareState(int row, int col) { return this->mat[row][col]; }

int Matrix::rowCount() { return this->mat.size(); }

int Matrix::colCount() { return this->mat[0].size(); }

void Matrix::changeSquareState(int row, int col, int val) {
  this->mat[row][col] = val;
}

std::vector<std::vector<int>> rowHintFunction() { return this->rowHints; }

std::vector<std::vector<int>> colHintFunction() { return this->colHints; }

void setZero() {
  for (int i = 0; i < this->mat.size(); ++i) {
    for (int j = 0; j < this->mat[0].size(); ++j) {
      this->changeSquareState(i, j, 0);
    }
  }
}
