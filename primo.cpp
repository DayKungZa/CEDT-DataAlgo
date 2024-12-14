#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}

int main(){
    int n;
    cin >> n;
    cout << "0,0,";
    for(int i=2;i<n;i++){
        cout << isPrime(i);
        cout << ',';
        if((i+1)%16==0) cout << '\n';
    }
}