#include <bits/stdc++.h>
using namespace std;

set<string> s;

void schwap(string in, string out, int pos){
  out += in[pos];
  in.erase(pos,1);
  //cout << pos << out << ' ' << in << endl;
  if(in.length()==0){
    s.insert(out);
    //cout << out << endl;
    return;
  }
  for(int i=0;i<in.length();i++){
    schwap(in, out, i);
  }
}


int main(){
  string n;
  cin >> n;
  string out;
  for(int i=0;i<n.length();i++){
    schwap(n,out,i);
  }
  vector<string> v;
  v.assign(s.begin(),s.end());
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++){
    cout << v[i] << ' ';
  }
}
