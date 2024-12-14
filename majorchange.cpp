#include <bits/stdc++.h>
using namespace std;

int main(){
  string str[2];
  double g[2];
  char a[2], b[2], c[2];
  bool pass[2];
  for(int i=0;i<2;i++){
    cin >> str[i] >> g[i] >> a[i] >> b[i] >> c[i];
    if(a[i] == 'A' && b[i] <= 'C' && c[i] <= 'C') pass[i] = 1;
    else pass[i] = 0;
  }
  if(pass[1]&&pass[0]){
    if(a[1]>a[0]) cout << str[1];
    else if(a[0]>a[1]) cout << str[0];
    else if(b[1]<b[0]) cout << str[1];
    else if(b[0]<b[1]) cout << str[0];
    else if(c[1]<c[0]) cout << str[1];
    else if(c[0]<c[1]) cout << str[0];
    else cout << "Both";
  }
  else if(pass[1]) cout << str[1];
  else if(pass[0]) cout << str[0];
  else cout << "None";
}