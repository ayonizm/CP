// Author: ayon6594
// Date: 2025-11-06
// Time: 21:22:08

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
    vector<ll> rp;
    // vector<bool> ev(n, false);
    // vector<bool> od(n, false);
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        if (t % 2 == 0)
        {
            // ev[i] = true;
            rp.pb(t);
        }
        x.pb(t);
    }
    if (rp.size() >= 2)
    {
        cout << rp[0] << " " << rp[1] << endl;
        return;
    }
    if (x[0] == 1)
    {
        cout << 1 << " " << x[1] << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll pk = x[j] % x[i];
            if (pk % 2 == 0)
            {
                cout << x[i] << " " << x[j] << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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