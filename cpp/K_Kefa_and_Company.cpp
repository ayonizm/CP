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
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; ++i)
    {
        int m, s;
        cin >> m >> s;
        v.pb({m, s});
    }

    sort(all(v));

    ll x = 0, y = 0;
    int z = 0;

    for (int r = 0; r < n; ++r)
    {
        while (v[r].ff - v[z].ff >= d)
        {
            y -= v[z].ss;
            ++z;
        }
        y += v[r].ss;
        x = max(x, y);
    }

    cout << x << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}