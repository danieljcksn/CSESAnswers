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
#define MAXN (ll)1e6+100

int solve(int n, vector<ll>& primes){
    map<ll, ll> factors;
    
    for(int i=0; primes[i]*primes[i]<=n; ++i){
        int pot = 0;
        while(n%primes[i] == 0){
            pot++;
            n/=primes[i];
        }

        if(pot != 0)
            factors.insert({primes[i], pot});
    }

    if(n > 1) factors.insert({n, 1});

    int divisors = 1;
    for(auto &it:factors) divisors *= it.second + 1;

    return divisors;
}

int main(){
    fastio;

    vector<bool> prime(MAXN+1, true);
    for(ll i=2; i*i <= MAXN; ++i){
        if(prime[i]){
            for(ll j=i*i; j<=MAXN; j+=i)
                prime[j] = false;
        }
    }

    vector<ll> primes;
    for(int i=2; i<=MAXN; ++i){
        if(prime[i]) primes.pb(i);
    }

    int t;
    cin >> t;
    
    while(t--){
        ll x;
        cin >> x;

        cout << solve(x, primes) << endl;
    }    
    

    return 0;
}