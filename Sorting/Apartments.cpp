#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()

int main(){
	int n, m, k;


	cin >> n >> m >> k;

	vector<long long> appl(n), apar(m);

	for(int i = 0; i < n; ++i)
		cin >> appl[i];
	
	for(int i = 0; i < m; ++i)
		cin >> apar[i];

	sort(all(appl));
	sort(all(apar));
	
	int ans = 0, i, j;

	i = j = 0;

	while(i < n && j < m){
		if(apar[j] <= appl[i] + k && apar[j] >= appl[i] - k){
			ans++;
			i++;
			j++; 
			continue;
		}

		if(appl[i] - k > apar[j]) ++j;
		else ++i;
	}

	cout << ans << endl;


	return 0;
}
