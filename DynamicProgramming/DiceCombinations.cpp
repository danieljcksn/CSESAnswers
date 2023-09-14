#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
#define MOD 1000000007
 
ll DP[(ll)1e6+1][7];
 
void modSum(ll &a, ll b){
	a = (a%MOD + b%MOD)%MOD;
}
 
ll dp(ll r, ll dice){
	if(r < 0) return 0;
	if(r == 0) return DP[r][dice]=1;

	if(DP[r][dice] != -1) return DP[r][dice];
 
	ll v=0;

	for(ll i=1; i<= 6; ++i) modSum(v, dp(r-i, i));

	return DP[r][dice] = v % MOD;
}
 
int main(){
	memset(DP, -1, sizeof(DP));
 
	ll n;
	cin >> n;
 
	dp(n, 6);
	cout << DP[n][6] << endl;
 
	return 0;
}