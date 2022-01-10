#include <bits/stdc++.h>

using namespace std;

string solve(string s){
    map<char, int> m;

    for(int i = 0; i < s.size(); ++i){
        if(m.find(s[i]) == m.end()){
            m.insert({s[i], 1});
            continue;
        }
        m.find(s[i])->second++;
    }

    int qt_odd = 0;
    pair<char, int> odd;

    for(auto it = m.begin(); it != m.end(); ++it)
        if(it->second & 1){
            qt_odd++;
            odd = {it->first, it->second};
        } 

    if((s.size()&1) && qt_odd != 1 ||
        !(s.size()&1) && qt_odd != 0)
        return "NO SOLUTION\n";

    string ans = "";
    ans.resize(s.size(), 'a');

    if(s.size()&1){
        ans[s.size()/2] = odd.first;
        odd.second--;
    }

    int i = 0, j = s.size()-1;
    for(auto it = m.begin(); it != m.end(); ++it){
        if(it->second&1) it->second--;
        while(it->second > 0){
            ans[i] = ans[j] = it->first;
            i++;
            j--;
            it->second -= 2;
        }
    }

    return ans + "\n";
}

int main(){
    string str;

    cin >> str;

    cout << solve(str);

    return 0;
}