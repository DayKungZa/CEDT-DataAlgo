#include <bits/stdc++.h>
using namespace std;

string name[10] = {
        "Robert", "William", "James", "John", "Margaret",
        "Edward", "Sarah", "Andrew", "Anthony", "Deborah"
    };
string nickname[10] = {
        "Dick", "Bill", "Jim", "Jack", "Peggy",
        "Ed", "Sally", "Andy", "Tony", "Debbie"
    };
    
int main(){
  int n;
  string s;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s;
    bool check = 0;
    for(int j=0;j<10;j++){
      if(s==name[j]){cout << nickname[j] << '\n'; check=1; break;}
      if(s==nickname[j]){cout << name[j] << '\n'; check=1; break;}
    }
    if(!check) cout << "Not found\n";
  }
}
