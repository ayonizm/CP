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
    vector<ll> x(n);
    vector<ll> w(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    ll j = 0, sw = 0;
    ll sc = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        sw += w[i];
        sc += x[i];
        while (sw > k)
        {
            sw -= w[j];
            sc -= x[j++];
        }
        ans = max(ans, sc);
    }

    cout << ans << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}