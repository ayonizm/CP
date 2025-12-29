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
    vector<ll> x;
    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        x.pb(t);
    }

    vector<ll> p(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        p[i + 1] = p[i] + x[i];
    }

    vector<ll> d(n + 1, 0);

    for (int j = 0; j < n; j++)
    {
        if (j > 0)
        {
            ll t = p[j] - x[j];
            auto it = lower_bound(p.begin() + 1, p.begin() + j + 1, t);
            int k = distance(p.begin(), it) - 1;
            if (k < j)
            {
                d[k]++;
                d[j]--;
            }
        }
        if (j < n - 1)
        {
            ll t = p[j + 1] + x[j];
            auto it = upper_bound(p.begin() + j + 2, p.begin() + n + 1, t);
            int k = distance(p.begin(), it) - 1;
            if (j + 1 <= k)
            {
                d[j + 1]++;
                d[k + 1]--;
            }
        }
    }

    ll v = 0;
    for (int i = 0; i < n; ++i)
    {
        v += d[i];
        cout << v << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}
int main()
{
    op();
    test(t){
    solve();
    }
    return 0;
}