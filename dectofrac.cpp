#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}

int main(){
	string a, b, c;
	cin >> a >> b >> c;
	int n, m, l;
	if(stoi(c)==0){
		n = stoi(a) * pow(10,b.length()) + stoi(b);
		l = pow(10,b.length());
	}
	else{
	  	string u, v, w;
		u.append(a);u.append(b);u.append(c);
		v.append(a);v.append(b);
	  	for(int i=0;i<c.length();i++) w.append("9");
	  	for(int i=0;i<b.length();i++) w.append("0");
		n = stoi(u) - stoi(v); l = stoi(w);
	}
	cout << n/gcd(n,l) << " / " << l/gcd(l,n);
}