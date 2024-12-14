#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int cnt = 0;
  vector<int> v;
  while(cin >> n){
    auto it = find(v.begin(), v.end(), n);
    if(it == v.end()){
      v.push_back(n);
      cnt++;
    }
  }
  sort(v.begin(), v.end());
  cout << cnt << endl;
  int s = v.size();
  for(int i=0;i<min(10,s);i++)
    cout << v[i] << ' ';
}