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
    int n, m;
    cin >> n >> m;
    ll ann;
    for (int i = 0; i < n; i++)
    {
        ll orr = 0;
        for (int j = 0; j < m; j++)
        {
            ll t;
            cin >> t;
            orr = orr | t;
        }
        // debug(orr);
        if (i == 0)
        {
            ann = orr;
            continue;
        }
        ann = ann & orr;
        // debug(ann);
    }
    if (ann > 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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
