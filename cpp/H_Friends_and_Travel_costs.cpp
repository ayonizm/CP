#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int main(){
    op();
    ll a, b;
    cin >> a >> b;
    map<ll, ll> x;
    for (ll i = 0; i < a; i++)
    {
        ll c, v;
        cin >> c >> v;
        x[c] += v;
    }
    for(auto k:x){
        if(k.first<=b){
            b += k.second;
        }
    }
    cout << b << endl;

    return 0;
}