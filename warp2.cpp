#include <bits/stdc++.h>
using namespace std;
vector<int> portal[101];
int pass = 0;

void warp(vector<int> path, int pos, int des){
  path.push_back(pos);
  if(pos==des){
    cout << path[0];
    for(int i=1;i<path.size();i++)
      cout << " -> " << path[i];
    cout << '\n';
    pass = 1;
    return;
  }
  for(int i=0;i<portal[pos].size();i++){
    warp(path, portal[pos][i], des);
  }
}

int main(){
  int n, s, e, a, b;
  cin >> n >> s >> e;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    portal[a].push_back(b);
    sort(portal[a].begin(), portal[a].end());
    portal[a].erase(unique(portal[a].begin(), portal[a].end() ), portal[a].end() );
  }
  vector<int> path;
  warp(path, s, e);
  if(!pass) cout << "no";
}
