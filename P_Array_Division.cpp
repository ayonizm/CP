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
#define ll long long
#define all(v) v.begin(), v.end()
#define endl "\n"

bool ok(const vector<ll> &a, int k, ll m)
{
    int cnt = 1;
    ll sum = 0;
    for (ll x : a)
    {
        if (sum + x > m)
        {
            cnt++;
            sum = x;
            if (cnt > k)
                return false;
        }
        else
        {
            sum += x;
        }
    }
    return true;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;

    ll l = *max_element(all(a)), r = accumulate(all(a), 0LL), ans = r;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (ok(a, k, m))
        {
            ans = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    op();
    // test(t)
    // {
        solve();
    // }
    return 0;
}
