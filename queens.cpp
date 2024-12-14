#include <bits/stdc++.h>
using namespace std;

int main(){
  	int n;
  	string a;
  	cin >> n;
  	int tiles[n][n];
  	vector<pair<int, int> > queens;
  	int queenpos[n][n];
  	for(int i=0;i<n;i++){
    	cin >> a;
    	for(int j=0;j<n;j++){
    		tiles[i][j] = 0;
      		if(a[j]=='Q'){
			  queens.push_back(make_pair(i,j));
			  queenpos[i][j] = 1;
			}
			else queenpos[i][j] = 0;
    	}
  	}
  	for(int i=0;i<queens.size();i++){
  		//column
  		for(int j=0;j<n;j++)
		  	if(j!=queens[i].first) tiles[j][queens[i].second] = 1;
  		//row
		for(int j=0;j<n;j++)
			if(j!=queens[i].second) tiles[queens[i].first][j] = 1;
		//diagonal
  		for(int j=0;j<n;j++){
		  	int diff = queens[i].first - queens[i].second;
		  	//diagdown
			if((j+diff!=queens[i].first || j!=queens[i].second) && j>=0 && j<n && j+diff>=0 && j+diff<n)
				tiles[j+diff][j] = 1;
		}
		int k = 1;
		while(queens[i].first + k>=0 && queens[i].first + k<n && queens[i].second - k>=0 && queens[i].second - k<n){
			tiles[queens[i].first + k][queens[i].second - k] = 1;
			k++;
		}
		k = 1;
		while(queens[i].first - k>=0 && queens[i].first - k<n && queens[i].second + k>=0 && queens[i].second + k<n){
			tiles[queens[i].first - k][queens[i].second + k] = 1;
			k++;
		}
	}
	/*
	for(int i=0;i<n;i++){
  		for(int j=0;j<n;j++)
  			cout << tiles[i][j];
  		cout << endl;
  	}
  	*/
  	for(int i=0;i<n;i++){
  		for(int j=0;j<n;j++)
  			if(queenpos[i][j]==1&&tiles[i][j]==0) cout << 'Q';
  			else cout << '-';
  		cout << endl;
  	}
}
