#include <bits/stdc++.h>
using namespace std;

int main(){
    string word, line;
    getline(cin, word);
    getline(cin, line);
    int wordlen = word.length();
    int linelen = line.length();
    int wordcnt = 0;
    for(int i=0;i<=linelen-wordlen;i++){
        string section = line.substr(i,wordlen);
        if(section==word){
            if((i-1<0 || line[i-1]=='\"' || line[i-1]=='(' || line[i-1]==')' || line[i-1]==' ' || line[i-1]==',' || line[i-1]=='.' || line[i-1]=='\'')
            &&(line[i+wordlen]=='\0' || line[i+wordlen]=='\"' || line[i+wordlen]=='(' || line[i+wordlen]==')' || line[i+wordlen]==' ' || line[i+wordlen]==',' || line[i+wordlen]=='.' || line[i+wordlen]=='\''))
                wordcnt++;
        }
    }
    cout << wordcnt;
}
