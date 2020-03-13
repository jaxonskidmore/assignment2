#include <iostream>

class Grid {
  public:
    Grid(int rows, int columns, float probability);
    ~Grid();
    int rows;
    int columns;
    float probability;


    char **newGrid();
    void printGrid();
    char **newArray;
};
