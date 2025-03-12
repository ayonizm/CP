#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    map<string, pair<int,pair<int,int>>> x;
    for (int i = 0; i < n; i++)
    {
        string s;
        int a, b, c;
        cin >> s;
        cin >> a >> b >> c;
        x[s] = make_pair(a, make_pair(b, c));
    }
    for(auto v:x){
        cout << v.first <<" "<< v.second.first << endl;
    }

    return 0;
}