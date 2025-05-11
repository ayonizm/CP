#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
void solve(){
    ll n;
    cin >> n;
    set<ll> k;
    for (int i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        k.insert(p);
    }
    if(k.size()==n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}
int main(){
    op();
    ll n;
    cin >>n;
    while (n--)
    {
        solve();
    }
    

    return 0;
}