// Author: ayon6594
// Date: 2025-10-21
// Time: 20:54:14

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
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].ff;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].ss;
        if (a[i].ss == 1)
        {
            mx = max(mx, a[i].ff + k);
        }
    }
    sort(a.begin(), a.end());
    ll mx2 = a.back().ff;
    if (mx > mx2)
    {
        cout << mx + a[n / 2].ff<<endl;
        return;
    }
    else
    {
        ll a1 = a[n / 2 - 1].ff;
        ll a2 = a[n / 2].ff;
        ll b1 = a[n / 2 - 1].ss;
        ll b2 = a[n / 2].ss;
        // debug(a1);
        // debug(b1);
        if (b1 == 1 && b2 == 1)
        {
            // debug("mathanoshto");
            if (a1 + k <= a2)
            {
                // debug("ok");
                cout << mx2 + a1 + k<<endl;
                return;
            }
            else
            {
                // debug("ovaiii");
                k -= (a2 - a1);
                cout << mx2 + a2 + (k / 2)<<endl;
                return;
            }
        }
        else if (b1 == 0)
        {
            // debug("else if 1");
            cout << mx2 + a1<<endl;
            return;
        }
        else if (n / 2 >= 1 && a[n / 2 - 1].ff == a1 && a[n / 2 - 1].ss == 1)
        {
            // debug("else if 2");
            cout << mx2 + max(a1 + (k / 2), min(a1 + k, a2))<<endl;
            return;
        }
        else if (b2 == 0)
        {
            // debug("else if 3");
            cout << mx2 + min(a2, a1 + k)<<endl;
            return;
        }
        else
        {
            // debug("else");
            return;
        }
    }
}

int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}