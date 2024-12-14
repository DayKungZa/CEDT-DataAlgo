#include <iostream>
#include <map>
using namespace std;
int H(int n) { // Tower of Hanoi
	if(n==0) return 0;
	else return 2*H(n-1) + 1;
}
int C(int n) { // Catalan Number
	if(n==0) return 1;
	else{
		int a = 0;
		for(int k=0;k<n;k++)
			a += C(k)*C(n-k-1);
		return a;
	}
}

int FM(int n, char x){
	if(x=='M')
		if(n==0) return 0;
		else return n - FM(FM(n-1,'M'),'F');
	if(x=='F')
		if(n==0) return 1;
		else return n - FM(FM(n-1,'F'),'M');
}
int F(int n) { // Female sequence
	FM(n, 'F');
}
int M(int n) { // Male sequence
	FM(n, 'M');
}

int main() {
	map<string, int(*)(int)> func = {{"H",H}, {"C",C}, {"F",F}, {"M",M}};
	string fn;
	int p;
	while (cin >> fn >> p) {
	if (func.find(fn) != func.end())
	cout << fn << "(" << p << ") = " << func[fn](p) << endl;
	}
	return 0;
}
