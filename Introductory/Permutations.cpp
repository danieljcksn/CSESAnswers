#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
    int n;

    cin >> n;
    int x = 1, y = 2;

    vector<int> arr;
    while(y <= n){
        arr.push_back(y);
        y += 2;
    }
    
    while(x <= n){
        arr.push_back(x);
        x += 2;
    }


    bool flag = true;
    for(int i = 1; i < n; ++i)
        if(abs(arr[i] - arr[i-1]) == 1){
            flag = false;
            break;
        }

    if(flag){
        for(int i = 0; i < n; ++i)
            cout << arr[i] << " ";
        cout << endl;  
    }
    else
        cout << "NO SOLUTION\n";

    return 0;
}