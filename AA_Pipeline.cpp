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
ll n, k;

bool ok(ll m)
{
    if (m >= k)
        return false;
    ll s = 1 + m * (2 * k - m - 1) / 2;
    return s >= n;
}

void solve()
{
    cin >> n >> k;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    ll m = 1 + k * (k - 1) / 2;
    if (m < n)
    {
        cout << -1 << endl;
        return;
    }

    ll l = 0;
    ll r = k - 1;
    ll a = k - 1;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            a = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << a << endl;
}

int main()
{
    solve();
    return 0;
}