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
    vector<ll> a(n + 1);
    vector<ll> v;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] < i)
            v.pb(i);
    }
    sort(all(v));
    ll r = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] < i && a[i] >= 2)
        {
            ll t = a[i] - 1;
            auto it = upper_bound(all(v), t);
            r += (it - v.begin());
        }
    }
    cout << r << endl;
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