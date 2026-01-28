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
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> x;
    for (ll i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
    }
    vector<ll> ps(n + 1, 0);
    for (ll i = 0; i < a; i++)
    {
        ll l;
        ll r;
        ll v;
        cin >> l >> r >> v;
        ps[l - 1] += v;
        // debug(ps[l - 1]);
        // debug(ps[r]);
        ps[r] -= v;
    }
    for (ll i = 1; i < n; i++)
    {
        ps[i] += ps[i - 1];
    }
    for (ll i = 0; i < n; i++)
    {
        x[i] += ps[i];
        
    }
    // for(auto v:ps){
        // debug(v);
    // }
    sort(all(x), greater<ll>());
    for (ll i = 0; i < b; i++)
    {
        ll k;
        cin >> k;
        cout << x[k - 1] << endl;
    }
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}