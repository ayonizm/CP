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
ll sum(ll x)
{
    ll s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

void solve()
{
    ll n, s;
    cin >> n >> s;

    ll l = 1;
    ll r = n + s;
    ll ans = n + 1;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        // debug(mid);
        if (mid - sum(mid) >= s)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if (ans > n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << n - ans + 1 << endl;
    }
}

int main()
{
    solve();
    return 0;
}