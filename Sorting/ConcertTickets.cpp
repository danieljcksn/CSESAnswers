#include <bits/stdc++.h>

using namespace std;
#define INF 1e9 + 100

void bs(vector<long long> &prices, int costumer){
	int i = 0, j = prices.size() - 1;

	int idx = -1;
	while(i < j){
		int mid = (i + j) / 2;

		if(prices[mid] > costumer){
			j = mid - 1;
		}else{
			i = mid + 1;
		}
	}
	
	cout << i << " - " << j << endl;
	cout << prices[i] << endl;

}

int main(){
	int n, m;

	cin >> n >> m;

	vector<long long> prices(n), costumers(m);

	for(int i = 0; i < n; ++i) cin >> prices[i];
	for(int i = 0; i < m; ++i) cin >> costumers[i];
	
	sort(prices.begin(), prices.end());
	bs(prices, 4);
	return 0;
}
