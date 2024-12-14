#include <bits/stdc++.h>
using namespace std;

int main(){
	long long idd;
	int id[13];
	int n = 0;
	cin >> idd;
	for(int i=0;i<12;i++){
		id[11-i] = idd%10;
		idd /= 10;
		n += (2+i)*id[11-i];
	}
	id[12] = (11-n%11)%10;
	for(int i=0;i<13;i++){
		if(i==1 || i==5 || i==10 || i==12)
			cout << "-";
		cout << id[i];
	}
	return 0;
}
