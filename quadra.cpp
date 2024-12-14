#include <bits/stdc++.h>

int main(){
  double a,b,c,x1,x2;
  std::cin >> a >> b >> c;
  x1 = (-b-sqrt(b*b-4*a*c))/(2*a);
  x2 = (-b+sqrt(b*b-4*a*c))/(2*a);
  std::cout << round(x1*1e3)/1e3 << " " << round(x2*1e3)/1e3;
}
