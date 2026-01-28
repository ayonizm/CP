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
int k(int a, int b, int x)
{
    ll r = (a * x) + b;
    return r;
}
void solve()
{
    int n;
    cin >> n;
    ll a, b;
    cin >> a >> b;
    vector<ll> x;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        x.pb(t);
    }
    sort(all(x));

    int c = 0;
    int j = -1;
    while (true)
    {
        ll r;
        if (j == -1)
        {
            r = 0;
        }
        else
        {
            r = (ll)a * x[j] + b;
        }

        auto z = lower_bound(x.begin() + j + 1, x.end(), r);

        if (z == x.end())
        {
            break;
        }

        c++;
        j = z - x.begin();
    }

    cout << c << endl;
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test(t){
    solve();
    }
    return 0;
}