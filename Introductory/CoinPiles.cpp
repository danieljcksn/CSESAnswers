#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

string solve(ll a, ll b){
	ll ca = a, cb = b;
	a = min(ca, cb);
	b = max(ca, cb);

	if((a + b) % 3 != 0 || b - a > a)
		return "NO";
		
	return "YES\n";
}

int main(){
	int t;

	cin >> t;

	while(t--){
		ll a, b;

		cin >> a >> b;

		cout << solve(a,b) << endl;
	}
	
}
