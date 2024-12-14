#include <bits/stdc++.h>
using namespace std;

int main(){
  string pass;
  bool big=0, small=0, num=0, sym=0;
  cin >> pass;
  for(int i=0;i<pass.length();i++){
    if(pass[i]>='a'&&pass[i]<='z') small = 1;
    else if(pass[i]>='A'&&pass[i]<='Z') big = 1;
    else if(pass[i]>='0'&&pass[i]<='9') num = 1;
    else sym = 1;
  }
  if(pass.length()>=12 && small && big && num && sym) cout << "strong";
  else if(pass.length()>=8 && small && big && num) cout << "weak";
  else cout << "invalid";
}