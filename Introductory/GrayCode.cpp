#include <bits/stdc++.h>

using namespace std;

vector<string> ans;
int sz;
void solve(string str, int i){
    if(i == sz){
        ans.push_back(str + "1");
        ans.push_back(str + "0");
        return;
    }

    solve(str + "0", i+1);
    solve(str + "1", i+1);
    return;
}

int main(){
    int n;

    cin >> n;
    sz = n-1;
    
    solve("", 0);

    //sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); ++i)
        cout << ans[i] << endl;

    return 0;
}