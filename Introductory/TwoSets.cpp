#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;

	cin >> n;

	vector<bool> arr(n+1, false);

	long long sum = n*(n+1)/2;

	if(sum&1)
		cout << "NO\n";
	else{
		cout << "YES\n";

		//objective
		sum /= 2;
		
		long long acm = n;
		arr[n] = true;
	
		int c = 1;
		n--;

		while(acm < sum){
			if((sum - acm) > n){
				arr[n] = true;
				acm += n;
				n--;
				c++;
			}else{
				arr[sum - acm] = true;
				c++;
				break;
			}
		}

		cout << c << endl;

		for(int i = 1; i < arr.size(); ++i)
			if(arr[i]) cout << i << " ";

		cout << endl;

		cout << arr.size() - 1 - c << endl;
		for(int i = 1; i < arr.size(); ++i)
			if(!arr[i]) cout << i << " ";

		cout << endl;
	}	
}
