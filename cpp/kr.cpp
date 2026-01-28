// Author: ayon6594
// Date: 2025-10-28
// Time: 21:15:52

#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(vec) vec.begin(), vec.end()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    vector<ll> x;
    ll mn = LLONG_MAX;
    ll mn2 = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        if(t%2==0){
            mn = min(mn, t);
        }
        if(t%2!=0){
            mn2 = min(mn2, t);
        }
        x.pb(t);
    }
    for (ll i = 2;; i++)
    {
        if(__gcd(i,mn)==1&&mn!=LLONG_MAX||__gcd(i,mn2)==1&&mn2!=LLONG_MAX){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test(t){
    solve();
    }
    return 0;
}