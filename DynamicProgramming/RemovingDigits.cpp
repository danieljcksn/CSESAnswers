#include <bits/stdc++.h>
 
using namespace std;
 
#define MOD (long long int)1000000007
 
int getMaxDigit(int x){
	int maxDigit = -1;
 
	while(x){
		int d = x%10;
		maxDigit = max(maxDigit, d);
		x/=10;
	}
 
	return maxDigit;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n; cin >> n;
 
	int ans[n+1] = {0};
 
	for(int i=0; i<=9; ++i){
		ans[i] = 1;
	}
 
	for(int i=10; i<=n; ++i){
		ans[i] = 1 + ans[i - getMaxDigit(i)];
	}
 
	cout << ans[n] << '\n';
}
 
/*
0 -> 1
...
9 -> 1
 
10 -> 2
 
11 -> 3
...
19 -> 3
 
20 -> 4
21 -> 4
*/