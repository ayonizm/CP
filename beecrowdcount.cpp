#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    vector<pair<int, string>> x;
    int a;
    string s;

    while (cin >> a >> s)
    {
        x.push_back({a, s});
    }
    sort(x.rbegin(), x.rend());
    int k = 1;
    for(auto v:x){
        cout <<k<<"."<< v.second << " " << v.first << endl;
        k++;
    }
    return 0;
}