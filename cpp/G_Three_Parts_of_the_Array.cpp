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
    vector<ll> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    vector<ll> p(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        p[i + 1] = p[i] + d[i];
    }

    ll l = 0, r = 0;
    int j = n;
    ll m = 0;

    for (int i = 0; i <= n; i++)
    {
        while (j > i && r < l)
        {
            j--;
            r += d[j];
        }
        if (l == r)
        {
            m = max(m, l);
        }
        if (i < n)
        {
            l += d[i];
        }
    }

    cout << m << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}