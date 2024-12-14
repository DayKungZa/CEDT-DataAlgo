#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin >> n;
  long long a[15];
  int i = 0;
  a[0] = n;
  while(n>1){
    if(n%2==0)
      n = n/2;
    else
      n = 3*n+1;
    i++;
    a[i%15] = n;
  }
  if(i>=15){
    for(int j=0;j<14;j++)
      cout << a[(i+j+1)%15] << "->";
    cout << 1;
  }
  else{
    for(int j=0; j<i;j++)
      cout << a[j] << "->";
    cout << 1;
	}
}
