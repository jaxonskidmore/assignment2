#include <iostream>
#include "Grid.h"

using namespace std;

int main(int argc, char** argv){
  Grid *m = new Grid(5,5,.5);

  cout << m->rows << endl;

  m->newGrid();
  cout << m;
  m->printGrid();

}
