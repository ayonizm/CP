#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    ll t;
    cin >> t;
    vector<ll> x;
    while (n--)
    {
        ll temp;
        cin >> temp;
        x.push_back(temp);
    }
    
    
    ll p = x[t - 1];
    cout << p << " ";
    for (ll i = t; i < x.size(); i++)
    {
        if(x[i]>p){
            p = x[i];
            cout << x[i] << " ";
        }
    }
    cout << endl;
    cout << x[t - 1] << " ";
    ll r = x[t - 1];
    for (ll i = t; i >=0; i--)
    {
        if(x[i]<r){
            r = x[i];
            cout << x[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}