#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x;

	cin >> n >> x;

	vector<long long> weights(n);

	for(int i = 0; i < n; ++i)
		cin >> weights[i];

	int gondolas = n;
	int i = 0, j = n-1;

	sort(weights.begin(), weights.end());

	while(j > i){
		if(weights[j] + weights[i] <= x){
			gondolas--;
			j--;
			i++;
		}else
			j--;
	}

	cout << gondolas << endl;

	return 0;
}	
