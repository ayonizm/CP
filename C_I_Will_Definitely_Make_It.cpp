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
    ll n, idx;
    cin >> n >> idx;
    vector<int> x;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
    }

    idx--;
    ll val = x[idx];
    vector<ll> v;
    sort(all(x));
    int l = unique(all(x)) - x.begin();
    // debug(l);
    for (ll i = 0; i < l; i++)
    {
        v.pb(x[i]);
    }
    ll mx = v[v.size() - 1];
    if (val == mx)
    {
        cout << "YES" << endl;
        return;
    }
    ll pos = lower_bound(all(v), val) - v.begin();
    // debug(pos);
    bool ok = true;
    for (ll i = pos; i < v.size() - 1; i++)
    {
        if (v[i + 1] - v[i] > val)
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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