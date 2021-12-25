#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;

    cin >> n;

    set<int> numbers;


    for(int i = 0; i < n; ++i){
        cin >> x;

        numbers.insert(x);
    }

    cout << numbers.size() << endl;

    return 0;
}