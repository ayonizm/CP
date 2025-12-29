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
    int n;
    cin >> n;
    vector<int> x1;
    vector<int> x2;
    vector<int> p;
    for (int i = 0; i < n * 2; i++)
    {
        int t;
        cin >> t;
        p.pb(t);
    }
    sort(all(p));
    // for (int i = 0; i < n; i++)
    // {
    //     x1.pb(p[i]);
    // }
    // for (int i = n; i < n * 2; i++)
    // {
    //     x2.pb(p[i]);
    // }
    int r = 0;
    vector < pair<int, int>> x;
    for (int i = 0; i < n; i++)
    {
        x.pb({p[i], p[2 * n - 1 - i]});
    }
    for (int i = 0; i < x.size() - 1; i++)
    {
        r += abs(x[i].ff - x[i + 1].ff) + abs(x[i].ss - x[i + 1].ss);
    }
    cout << r << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << x1[i] << " " << x2[i] << endl;
    // }
    for (auto v : x)
    {
        cout << v.ff << " " << v.ss << endl;
    }
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