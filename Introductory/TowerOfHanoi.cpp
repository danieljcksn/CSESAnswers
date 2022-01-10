#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> moves;
void towerOfHanoi(int n, int from, int to, int aux){ 
    if(n == 0) return;

    towerOfHanoi(n-1, from, aux, to);
    moves.push_back({from, to});
    towerOfHanoi(n-1, aux, to, from);
} 

int main(){
    int n;

    cin >> n;

    towerOfHanoi(n, 1, 3, 2);

    cout << moves.size() << endl;

    for(int i = 0; i < moves.size(); ++i)
        cout << moves[i].first << ' ' << moves[i].second << '\n';

    return 0;
}