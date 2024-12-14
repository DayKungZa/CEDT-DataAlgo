#include <bits/stdc++.h>
using namespace std;

int main(){
  string n;
  getline(cin, n);
  string l = n+'$'+n;
  priority_queue<string> pq;
  for(int i=0;i<n.length()+1;i++){
  	string y = l.substr(i,n.length()+1);
    pq.push(y);
  }
  string y;
  for(int i=0;i<n.length()+1;i++){
  	string x = pq.top();
  	y = y + x[n.length()];
  	pq.pop();
  }
  reverse(y.begin(), y.end());
  cout << y;
}
