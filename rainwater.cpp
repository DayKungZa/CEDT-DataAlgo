#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int road[n], rmax[n], rmin[n];
	cin >> road[0];
	rmax[0] = road[0];
	for(int i=1;i<n;i++){
		cin >> road[i];
		rmax[i] = max(road[i], rmax[i-1]);
	}
	rmin[n-1] = road[n-1];
	for(int i=n-2;i>=0;i--){
		rmin[i] = max(rmin[i+1], road[i]);
	}
	int rain = 0;
	for(int i=0;i<n;i++){
		rain += min(rmax[i],rmin[i]) - road[i];
	}
	cout << rain;
}
