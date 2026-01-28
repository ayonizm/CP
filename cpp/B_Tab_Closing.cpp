// Author: ayon6594
// Date: 2025-11-16
// Time: 20:51:17

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
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << 1 << endl;
        return;
    }
    // debug(a / b);
    if (c <= a/b)
    {
        cout << 1 << endl;
        // debug("okkk");
    }
    else
    {
        cout << "2" << endl;
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