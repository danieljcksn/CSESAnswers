#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define INFLL 0x3f3f3f3f3f3f3f3f

vector<ll> apples;
ll ans = INFLL;

int cont = 0;
void solve(ll lweight, ll rweight, int i){
    if(i == apples.size()){
        ans = min(ans, abs(lweight - rweight));
        return;
    }

    solve(lweight + apples[i], rweight, i+1);
    solve(lweight, rweight + apples[i], i+1);
}

int main(){ 
    int n;
    cin >> n;

    apples.assign(n, 0);
    for(int i = 0; i < n; ++i)
        cin >> apples[i];

    solve(0, 0, 0);
    cout << ans << endl;

    return 0;
}