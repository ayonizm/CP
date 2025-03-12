#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    vector<pair<string, string>> x;
    int n;
    cin >> n;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        x.push_back({s1, s2});
    }
    sort(x.begin(), x.end());
    int l = unique(x.begin(), x.end()) - x.begin();
    cout << l << endl;
    return 0;
}