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
    vector<ll> x;
    ll sm = 0;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        x.pb(t);
    }
    ll prv = x[n-1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (x[i] >= prv)
        {
            ll k = x[i] / prv;
            if (x[i] % prv != 0)
            {
                k++;
            }
            prv = x[i] / k;
            sm += k - 1;
        }
        if (x[i] <= prv)
        {
            prv = x[i];
        }
    }
    cout << sm << endl;
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