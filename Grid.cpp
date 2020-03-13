#include <iostream>
#include "Grid.h"

using namespace std;

Grid::Grid(int rows, int columns, float probability){
  this->rows = rows;
  this->columns = columns;
  this->probability = probability;
  newGrid();
};

char **Grid::newGrid(){
  float randomInt = 0;

  char**newArray;
  newArray = new char*[rows];
  for(int i = 0; i < rows; ++i){
    newArray[i] = new char[columns];
  }

  for(int row = 0; row < rows; ++row){
    for(int col = 0; col < columns; ++col){
      randomInt = (float) rand() / (double)RAND_MAX;
      if (randomInt < probability){
        newArray[row][col] = 'x';
      }
      else
        newArray[row][col] = '-';
    }
  }
}

void Grid::printGrid(){
  for(int row = 0; row < rows; ++row){
    for(int col = 0; col < columns; ++col){
      cout << newArray[row][columns] << " ";  //newArray not declared in this scope????
    }
    cout << endl;
  }
}
