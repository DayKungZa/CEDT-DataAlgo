#include <iostream>
using namespace std;
const int R = 7, C = 7;

void floodfill(int x[][C], int r, int c, int e) {
  x[r][c] = e;
  //left
  if(c-1>=0 && c-1<7 && x[r][c-1]==0)
    floodfill(x, r, c-1, e);
  //right
  if(c+1>=0 && c+1<7 && x[r][c+1]==0)
    floodfill(x, r, c+1, e);
  //up
  if(r+1>=0 && r+1<=6 && x[r+1][c]==0)
    floodfill(x, r+1, c, e);
  //down
  if(r-1>=0 && r-1<=6 && x[r-1][c]==0)
    floodfill(x, r-1, c, e);
}

int main() {
  int x[][C] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}};
  for (int r=0; r<R; ++r)
    for (int c=0; c<C; ++c)
      cin >> x[r][c];
  int row, col, e;
  cin >> row >> col >> e;
  floodfill(x, row, col, e);
  for (int r=0; r<R; ++r) {
    for (int c=0; c<C; ++c)
      cout << x[r][c] << ' ';
    cout << endl;
  }
}