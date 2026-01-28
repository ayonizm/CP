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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ay = c - a;
    int ap = d - b;
    bool ok1 = (a <= 2 * (b + 1) && b <= 2 * (a + 1));
    // debug();
    bool ok2 = (ay <= 2 * (ap + 1) && ap <= 2 * (ay + 1));
    if (ok1 && ok2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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