#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++) cout << "0, ";
	cout << endl;
	for(int i=1;i<n;i++){
		cout << "0, ";
		for(int j=1;j<n;j++){
			cout << lcm(i,j) << ", ";
		}
		cout << endl;
	}
}
