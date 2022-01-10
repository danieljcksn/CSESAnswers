#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

string solve(ll a, ll b){
	if((a + b) % 3 != 0 || b - a > a)
		return "NO";
	return "YES";
}

int main(){
	int t;
	ll a, b;
	cin >> t;

	while(t--){
		cin >> a >> b;
		cout << solve(min(a, b),max(a, b)) << endl;
	}
	
}
