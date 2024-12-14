#include <bits/stdc++.h>
using namespace std;

string a;
void rep(int n, int k){
  for(int i=n;i<n+k;i++){
    a[i] = '.';
  }
}

int main(){
  int k, charpos;
  getline(cin, a);
  cin >> k;
  int dup = 1;
  int pos = 0;
  for(int i=1;i<a.length();i++){
    if(a[i]==a[pos]){
      dup++;
    }else{
      if(dup>=k){
        rep(pos, dup);
      }
      pos = i;
      dup = 1;
    }
  }
  if(dup>=k){
    rep(pos, dup);
  }
  for(int i=0;i<a.length();i++){
    if(a[i]!='.') cout << a[i];
  }
}