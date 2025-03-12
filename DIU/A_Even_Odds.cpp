#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    ll c;
    cin >> c;
    vector<ll> k;
    for (ll i = 1; i <= n; i+=2)
    {
        k.push_back(i);
    }
    for (ll i = 2; i <= n; i+=2)
    {
        k.push_back(i);
    }
    cout << k[c - 1] << endl;
    

    return 0;
}