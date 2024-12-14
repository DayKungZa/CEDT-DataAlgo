#include <bits/stdc++.h>
using namespace std;

int dis(int a, int b, int c, int d){
  return abs(a-b) + abs(b-c) + abs(c-d);
}
bool inside(int c,int a, int b){
	if((a<=c && c<=b) || (b<=c && c<=a)) return 1;
	else return 0;
}

int main(){
  int n;
  cin >> n;
  int lift[n][3];
  for(int i=0;i<n;i++){
    cin >> lift[i][0] >> lift[i][1] >> lift[i][2];
  }
  int q, c, d;
  cin >> q;
  for(int i=0;i<q;i++){
    cin >> c >> d;
    int m = INT_MAX;
    int mpos;
    for(int j=0;j<n;j++){
      int a = lift[j][1], b = lift[j][2];
      int l;
      if(inside(c,a,b)&&inside(d,a,b)) l = 0;
	  else if(inside(c,a,b)) l = abs(b-d);
	  else l = abs(b-c) + abs(c-d);
	  //cout << lift[j][0] << l << endl;
      if(l<m){
        m = l;
        mpos = j;
      } else if(l==m && lift[j][0]<lift[mpos][0])
        mpos = j;
    }
    cout << ">> " << lift[mpos][0] << endl;
  }
}
