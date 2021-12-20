#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
    int n;

    cin >> n;

    int arr[n];
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    
    ll ans = 0;
    for(int i = 1; i < n; ++i){
        if(arr[i] < arr[i-1]){
            ll diff = arr[i-1] - arr[i];
            ans += diff;
            arr[i] += diff;
        }
    }

    cout << ans << endl;

    return 0;
}