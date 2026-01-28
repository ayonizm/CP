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
    ll x, y, z;
    cin >> x >> y >> z;
    ll p, q, r;
    p = (x % 2);
    q = (y % 2);
    r = (z % 2);
    // debug(p);
    // debug(q);
    // debug(r);
    ll a1 = 0;
    ll a2 = 0;
    ll a3 = 0;
    if (q == r)
    {
        a1 = 1;
    }
    if (p==r){
        a2 = 1;
    }
    if (p==q)
    {
        a3 = 1;
    }
    cout << a1 << " " << a2 << " " << a3 << endl;
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}