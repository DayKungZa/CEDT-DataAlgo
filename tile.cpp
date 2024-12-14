#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	int inv = 0;
	cin >> n;
	int zrow = n;
	int a[n*n-1];
	for(int i=0;i<n*n-1;i++){
		cin >> k;
		if(k==0){
			zrow = i/n+1;
			i--;
		}
		else
			a[i] = k;
	}
	for(int i=0;i<n*n-1;i++){
		for(int j=i+1;j<n*n-1;j++){
			if(a[i]>a[j])
				inv++;
		}
	}
	cout << n << " " << inv << " " << zrow << endl;
	if(n%2==0){
		if((inv%2==0 && zrow%2==1) || (inv%2==1 && zrow%2==0))
			cout << "YES";
		else cout << "NO";
	} else
		if(inv%2==0)
			cout << "YES";
		else cout << "NO";
}
