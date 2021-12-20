#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
    ll n;

    cin >> n;

    ll s = 0;
    for(int i = 0; i < n-1; ++i){
        ll x;

        cin >> x;
        s += x;
    }

    cout << n * (n+1) / 2 - s << endl;

    return 0;
}