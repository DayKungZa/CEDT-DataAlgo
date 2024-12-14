#include <bits/stdc++.h>
using namespace std;

int minimal(vector<int> a){
  int mn = INT_MAX;
  for(int i=0;i<a.size();i++) mn = min(mn, a[i]);
  return mn;
}
int maximum(vector<int> a){
  int mx = INT_MIN;
  for(int i=0;i<a.size();i++) mx = max(mx, a[i]);
  return mx;
}/*
void print(vector<int> a){
	for(int i=0;i<a.size();i++) cout << a[i] << " ";
	cout << endl;
}*/

int main(){
  int n;
  int zag;
  int i=0;
  vector<int> a;
  vector<int> b;
  while(1){
    cin >> n;
    if(n==-998){zag = 1; break;}
    else if(n==-999){zag = 0; break;}
    if(i%4==0 || i%4==3)
		a.push_back(n);
    else b.push_back(n);
    i++;
  }
  //print(a); print(b);
  if(zag==1) cout << minimal(a) << " " << maximum(b);
  else cout << minimal(b) << " " << maximum(a);
}
