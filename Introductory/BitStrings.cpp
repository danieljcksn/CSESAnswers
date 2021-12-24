#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
typedef unsigned long long int ull;


int main(){
    int n;

    cin >> n;

    ull ans = 2;
    for(int i = 1; i < n; ++i)
        ans = (ans % MOD * 2) % MOD;
    
    cout << ans << endl;

    return 0;
}