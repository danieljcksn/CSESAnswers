#include <bits/stdc++.h>
 
#define MOD (long long int)(1e9+7)
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n; cin >> n;
	char grid[n][n];

	long long int gridAns[n][n];
	string s;
	
	for(int i=0; i<n; ++i){
		cin >> s;
 
		for(int j=0; j<n; ++j){
			grid[i][j] = s[j];
			gridAns[i][j] = 0;
		}
	}
 
	for(int i=0; i<n; ++i){
		if(grid[0][i] == '*') break;
 
		gridAns[0][i] = 1;
	}
 
	for(int i=0; i<n; ++i){
		if(grid[i][0] == '*') break;
 
		gridAns[i][0] = 1;
	}
 
	for(int i=1; i<n; ++i){
		for(int j=1; j<n; ++j){
			if(grid[i][j] == '*')
				continue;
			
			gridAns[i][j] = (gridAns[i-1][j]%MOD + gridAns[i][j-1]%MOD)%MOD;
		}
	}
 
	cout << gridAns[n-1][n-1] << '\n';
}
