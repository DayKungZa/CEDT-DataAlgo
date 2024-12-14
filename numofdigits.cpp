#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

ll poww(ll n){
  ll x = 1;
  for(ll i=0;i<n;i++) x *= 10;
  return x;
}

int main(){
  ll m, n;
  ll sum = 0;
  cin >> m >> n;
  double i;
  for(i=to_string(m).length();i<to_string(n).length();i++){
    sum += (poww(i) - m)*i;
    m = poww(i);
  }
  sum += (n - m + 1)*i;
  cout << sum;
}