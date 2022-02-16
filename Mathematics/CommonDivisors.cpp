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


int main(){
    fastio;

    int n;
    cin >> n;

    vi arr(n);
    int mx=-1;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    vector<int> occurs(mx+1, 0);
    for(auto i:arr)
        occurs[i]++;

    for(int mdc=mx; mdc>0; --mdc){
        int c=0;
        for(int i=mdc; i<=mx; i+=mdc){
            c += occurs[i];
        }

        if(c>1){
            cout << mdc << endl;
            break;
        }
    }

    return 0;
}