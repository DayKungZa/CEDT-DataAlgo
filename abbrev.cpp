#include <iostream>
#include <math.h>
using namespace std;

int main(){
  long n;
  double m;
  char c;
  cin >> n;
  if(n<1e3){
    cout << n;
    return 0;
  }
  if(n>=1e9){
    c = 'B';
    if(n<1e10)
      m = round(n/100000000.0)/10.0;
    else
      m = round(n/1000000000.0);
  } else if(n>=1e6){
    c = 'M';
    if(n<1e7)
      m = round(n/100000.0)/10.0;
    else
      m = round(n/1000000.0);
  } else {
    c = 'K';
    if(n<1e4)
      m = round(n/100.0)/10.0;
    else
      m = round(n/1000.0);
  }
  cout << m << c;
  return 0;
}
