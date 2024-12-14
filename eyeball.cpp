#include <iostream>
#include <math.h>
using namespace std;

double distance(int x1, int y1, int x2, int y2){
  double dis = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  return dis;
}

int main(){
  int xe, ye, re, rp, xm, ym;
  cin >> xe >> ye >> re >> rp >> xm >> ym;
  int c = re-rp;
  double C = distance(xe,ye,xm,ym);
  double ratio = c/C;
  int xp = round(ratio*(xm-xe) + xe);
  int yp = round(ratio*(ym-ye) + ye);
  cout << xp << " " << yp;
  return 0;
}
