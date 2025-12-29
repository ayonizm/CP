//************************************************************
//  █████  ██    ██   ██████   ███    ██ |
// ██   ██ ██    ██  ██    ██  ████   ██ |
// ███████   ████    ██    ██  ██ ██  ██ |
// ██   ██    ██     ██    ██  ██  ██ ██ |
// ██   ██    ██      ██████   ██   ████ |
// ************************************************************/
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

bool good(ll x, ll w, ll h, ll n)
{
    return (x / w) * (x / h) >= n;
}

void solve()
{
    ll w, h, n;
    cin >> w >> h >> n;

    ll l = 0;
    ll r = 1;
    while (!good(r, w, h, n)){
        r *= 2;
    }

    while (r > l + 1)
    {
        ll m = (l + r) / 2;
        if (good(m, w, h, n))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }

    cout << r << endl;
}

int main()
{
    op();
    solve();
    return 0;
}