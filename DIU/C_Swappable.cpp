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
    ll n;
    cin >> n;
    map<ll, ll> x;
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        x[k]++;
    }
    ll p;
    p = (n * (n - 1))/2;
    for(auto v:x){
        ll lo = v.second;
        p -= (lo * (lo - 1)) / 2;
    }
    cout << p << endl;
    return 0;
}