#include <bits/stdc++.h>

int main(){
    string s;
    while(getline(cin,s)){
        string v;
        for(int i=0;i<s.length();i++){
            if(i>='A'&&i<='Z')
                v += '1';
            if(i>='a'&&i<='z')
                v += '0';
        }
    }
}