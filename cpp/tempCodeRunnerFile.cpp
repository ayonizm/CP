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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<ll, int> xp;
    for (int i = 0; i < k; i++)
    {
        ll t;
        cin >> t;
        xp[t] = 1;
    }
    // bool ok = true;
    ll pos = 1;
    xp[pos] = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            pos++;
        }
        else
        {
            ll y = pos + 1;
            while (xp.find(y) != xp.end())
            {
                y++;
            }
            // debug(y);
            pos = y;
        }
        xp[pos] = 1;
    }
    cout << xp.size() << endl;
    for (auto v : xp)
    {
        cout << v.ff << " ";
    }
    cout << endl;
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test(t)
    {
        solve();
    }
    return 0;
}