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
    vector<int>x;
    vector<bool> ay(n + 1, false);
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
        if (x[i] > 0)
        {
            ay[x[i]] = true;
        }
        else
        {
            ct++;
        }
    }
    // debug(ct);
    int a1 = n, a2 = -1;
    for (int i = 0; i < n; i++)
    {
        // debug(ct);
        bool m = false;
        if (x[i] != 0)
        {
            if (x[i] != i + 1)
            {
                m = true;
            }
        }
        else
        {
            // debug(ct);
            if (!ay[i + 1])
            {
                if (ct > 1)
                {
                    // debug(m);
                    m = true;
                }
            }
            else
            {
                // debug("ok");
                m = true;
            }
        }
        if (m)
        {
            a1 = min(a1, i);
            a2 = max(a2, i);
        }
    }
    // debug(a1);
    int ovai = a2 - a1 + 1;
    // debug(ovai);
    if (a1 > a2)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ovai << endl;
    }
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
