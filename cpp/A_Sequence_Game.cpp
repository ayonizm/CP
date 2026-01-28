// Author: ayon6594
// Date: 2025-11-06
// Time: 20:38:17

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
    map<ll, ll> p;
    ll mn = LLONG_MAX;
    ll mx = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        ll r;
        cin >> r;
        p[r]++;
        mn = min(mn, r);
        mx = max(mx, r);
        x.pb(r);
    }
    ll k;
    cin >> k;
    if (p[k] != 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (k <= mx && k >= mn)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    op();
    test(t)
    {
        solve();
    }
    return 0;
}