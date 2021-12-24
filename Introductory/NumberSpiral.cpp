#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;

int main(){ 
    ull t, x, y;

    cin >> t;

    while(t--){
        cin >> x >> y;

        x--;
        y--;
        
        ull diag = max(x, y) * (max(x, y) + 1) + 1;

        if(x < y){
            ull diff = y - x;
            y&1? diag -= diff:diag += diff;
        }else{
            ull diff = x - y;
            x&1? diag += diff:diag -= diff;
        }

        cout << diag << endl;
    }

    return 0;
}