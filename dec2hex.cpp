#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

void dec2hex(int d) {
  char s[100];
  int i = 0;
  if(d==0){
  	cout << 0;
  	return;
  }
  while(d){
    int t = d%16;
    if(t<10) s[i] = t+'0';
    else s[i] = t-10+'A';
    d /= 16;
    i++;
  }
  for(int j=i-1;j>=0;j--)
  	cout << s[j];
  return;
}


int main() {
 int d;
 while (cin >> d) {
 cout << d << " -> ";
 dec2hex(d);
 cout << endl;
 }
 return 0;
} 

