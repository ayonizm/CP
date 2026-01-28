#include <bits/stdc++.h>
using namespace std;

#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
    op();
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> x;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 1; j <= s.length() - i; j++) {
            string k = s.substr(i, j);
            x.push_back(k);
        }
    }
    map<string,int> x1;
    for (auto v : x) {
        if(v.length()==2){
            x1[v]++;
        // cout << v << endl;
        }
    }
    vector<int> nafis;
    for(auto v1:x1){
        nafis.push_back(v1.second);
    }
    int ayon = *max_element(nafis.begin(), nafis.end());
    for(auto v:x1){
        if(v.second==ayon){
            cout << v.first << endl;
            break;
        }
    }
    return 0;
}
