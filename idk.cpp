#include <bits/stdc++.h>
using namespace std;
#define loop for(int i=0;i<4;i++)

int main(){
  double a[4];
  loop
    cin >> a[i];
  double minnn = INT_MAX;
  double maxxx = INT_MIN;
  int minn, maxx;
  loop{
    if(a[i]<minnn){
      minnn = a[i];
      minn = i;
    }
    if(a[i]>maxxx){
      maxxx = a[i];
      maxx = i;
    }
  }
  double sum;
  loop{
    if(i!=maxx&&i!=minn)
      sum += a[i];
  }
  cout << round(sum/2.0*100.0)/100.0;
}