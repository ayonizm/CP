#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
const int MOD = 1e9 + 7;
int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    ll g = a[0];
    for (ll i = 1; i < n; ++i)
    {
        g = __gcd(g, a[i]);
    }
    while (q--)
    {
        ll tt, x;
        cin >> tt >> x;
        a[tt- 1] *= x;
        g = a[0];
        for (ll i = 1; i < n; i++)
        {
            g = __gcd(g, a[i]);
        }
        cout << g % MOD << endl;
    }

    return 0;
}
