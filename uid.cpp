#include <bits/stdc++.h>
using namespace std;

void printset(set<int> s, char c){
    cout << c << ":";
    for(auto it = s.begin();it!=s.end();it++)
        cout << " " << *it;
    cout << '\n';
}

int main(){
	vector<vector<int> > v;
	vector<set<int> > s;
	string n;
	set<int> u, its, diff;
	while(getline(cin, n)){
		istringstream iss(n);
		vector<int> vec;
		int num;
		while(iss >> num){
            vec.push_back(num);
		}
		v.push_back(vec);
	}
	//make an union set (v1 U v2 U v3)
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			u.insert(v[i][j]);
	}
	//make a diff set (v1 - v2 - v3)
	for(int i=0;i<v[0].size();i++){
        diff.insert(v[0][i]);
	}
	for(int i=1;i<v.size();i++){
		for(int j=0;j<v[i].size();j++)
			diff.erase(v[i][j]);
	}

	//make an intersect set (v1 and v2 and v3)
	for(int i=0;i<v[0].size();i++){
        its.insert(v[0][i]);
	}
	for(int i=1;i<v.size();i++){
		set<int> current(v[i].begin(), v[i].end());
        for (auto it = its.begin(); it != its.end(); ) {
            if (current.find(*it) == current.end()) {
                it = its.erase(it);
            } else it++;
        }
	}
	printset(u,'U');
	printset(its,'I');
	printset(diff,'D');
}
