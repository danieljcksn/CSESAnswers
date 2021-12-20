#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
    string str;

    cin >> str;

    int maxx = -1, counter = 1;

    for(int i = 1; i < str.size(); ++i){
        if(str[i] == str[i-1])
            counter++;
        else{
            maxx = max(maxx, counter);
            counter = 1;
        }
    }

    maxx = max(maxx, counter);
    cout << maxx << endl;

    return 0;
}