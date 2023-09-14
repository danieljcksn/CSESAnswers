#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n, x; cin >> n >> x;
 
	vector<int> coins(n);
	
	for(int i=0; i<n; ++i) cin >> coins[i];
 
	vector<int> dp(1e7, 1e7);
 
	dp[0] = 0;
 
	for(int i=0; i<x; ++i){
		for(int c:coins){
			if(i+c <= x){
				dp[i+c] = min(dp[i+c], dp[i] + 1);
			}
		}
	}
 
	cout << (dp[x] != 1e7 ? dp[x] : -1) << '\n';
}