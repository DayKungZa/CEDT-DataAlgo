#include <bits/stdc++.h>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(){
    int n, m;
    map<string, double> price;
    map<string, double> count;
    double total = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        double b;
        string a;
        cin >> a >> b;
        price.insert({a,b});
    }
    cin >> m;
    for(int i=0;i<m;i++){
        double b;
        string a;
        cin >> a >> b;
        auto it = price.find(a);
        auto id = count.find(a);
        if(it!=price.end()){
            total += it->second * b;
            if(id!=count.end()){
                id->second += it->second * b;
            }else{
                count.insert({a,it->second * b});
            }
        }
    }
    if(total==0){
        cout << "No ice cream sales";
    }else{
        cout << "Total ice cream sales: " << total << "\n" << "Top sales: ";
        int maxx = 0;
        for(auto it:count){
            if(it.second > maxx) maxx= it.second;
        }
        vector<string> x;
        for(auto it:count){
            if(it.second == maxx) x.push_back(it.first);
        }
        sort(x.begin(),x.end());
        for(int i=0;i<x.size();i++)
            cout << x[i] << ' ';
    }
}