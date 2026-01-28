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
    ll n;
    ll a;
    ll b;
    cin >> n >> a >> b;
    int r1 = n % 2;
    int r2 = a % 2;
    int r3 = b % 2;
    // bool ok = 0;
    if (r1 != r3)
    {
        cout << "NO" << endl;
        return;
    }
    if (r1 == r2)
    {
        cout << "YES" << endl;
        return;
    }
    if (a < b)
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