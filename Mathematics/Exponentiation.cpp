#include <bits/stdc++.h>

using namespace std;

#define EPS 1e-9
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define MOD 1000000007
#define PI 3.141592653589793238462643383279502884
#define all(x) x.begin(), x.end()
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL); 
#define mp make_pair
#define pb push_back
#define sz(x) int(x.size())
#define endl '\n'
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vii;
typedef vector<vl> vll;

long long binpow(long long a, long long b) {
    a %= MOD;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main(){
    fastio;

    int n;
    cin >> n;

    while(n--){
        ll a, b;
        cin >> a >> b;

        cout << binpow(a, b) << endl;
    }
    
    

    return 0;
}