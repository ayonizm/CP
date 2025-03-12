#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll x;
    cin >> x;
    vector<pair<pair<ll, ll>, ll>> l;
    while (x--)
    {
        ll t1,t2,t3;
        cin>>t1>>t2>>t3;
        l.push_back({{t1, t2}, t3});
    }
        sort(l.begin(), l.end());
        for(auto v:l){
            cout << v.first.first << " " << v.first.second << " " << v.second << endl;
        }
    
    return 0;
}