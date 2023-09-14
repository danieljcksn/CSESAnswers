#include <bits/stdc++.h>
#define MOD (long long int)1000000007
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n, x; cin >> n >> x;
 
	vector<int> coins(n);
	
	for(int i=0; i<n; ++i) cin >> coins[i];
 
	sort(coins.begin(), coins.end());
 
	vector<long long int> dp(1e6+10, 0);
	
	for(int i=0; i<=x; ++i){
		for(int c:coins){
			if(i-c == 0){
				dp[i] = (dp[i] + 1)%MOD;
			}else{
				if(i-c > 0){
					dp[i] = (dp[i] + dp[i-c]%MOD)%MOD;
				}
			}
		}
	}
 
	cout << dp[x]%MOD << '\n';
}

/*
 
dp[x] -> number of distinct ways to reach sum x
dp[x] = 
 
dp[0] = 0
dp[1] += dp[i-c]
 
*/