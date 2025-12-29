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

    vector<pair<ll, ll>> a(n);
    map<ll, ll> x, y;
    vector<ll> u, v;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].ff >> a[i].ss;
        u.pb(a[i].ff);
        v.pb(a[i].ss);
        x[a[i].ff]++;
        y[a[i].ss]++;
    }

    if (n <= 1)
    {
        cout << "1" << endl;
        return;
    }

    sort(all(u));
    sort(all(v));

    ll ay1 = u[n - 1] - u[0] + 1;
    ll ay2 = v[n - 1] - v[0] + 1;
    ll ay = ay1 * ay2;

    for (ll i = 0; i < n; i++)
    {
        ll p = a[i].ff;
        ll q = a[i].ss;

        ll l = u[0];
        if (p == u[0] && x[u[0]] == 1)
        {
            l = u[1];
        }

        ll m = u[n - 1];
        if (p == u[n - 1] && x[u[n - 1]] == 1)
        {
            m = u[n - 2];
        }

        ll b = v[0];
        if (q == v[0] && y[v[0]] == 1)
        {
            b = v[1];
        }

        ll c = v[n - 1];
        if (q == v[n - 1] && y[v[n - 1]] == 1)
        {
            c = v[n - 2];
        }

        ll k1 = m - l + 1;
        ll k2 = c - b + 1;
        ll k = k1 * k2;

        if (k == n - 1)
        {
            k += min(k1, k2);
        }

        ay = min(ay, k);
    }

    cout << ay << endl;
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