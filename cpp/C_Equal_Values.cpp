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
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        a.pb(t);
    }
    ll ans = LLONG_MAX;
    ll l = 0;
    while (l < n)
    {
        ll j = l;
        while (j + 1 < n && a[j + 1] == a[l])
        {

            j++;
        }
        // debug(j);
        ll c = a[l];
        // debug(l + n - j - 1);
        ll ay = 1LL * ((1LL * c) * (1LL) * (l + n - j - 1));
        // debug(ay);
        ans = min(ans, ay);
        l = j;
        l++;
    }
    cout << ans << endl;
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