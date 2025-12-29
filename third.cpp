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
#define ld long double
void solve()
{
    ld x;
    cin >> x;
    if (x <= 0.0)
    {
        cout << 0.0 << endl;
    }
    else if (x <= 7500.0)
    {
        ld f = (x / .2)+12500.0;
        // f += 12500.0;
        cout << setprecision(8) << f << endl;
    }
    else if (x <= 27500.0)
    {
        ld f = ((x - 7500.0) / .4) + 50000.0;
        cout << setprecision(8) << f << endl;
        // printf("%.8llf\n", f);
    }
    else if (x <= 42500.0)
    {
        ld f = (x + 32500.0) / .6;
        // f += 100000.0;
        cout << setprecision(8) << f << endl;
        // printf("%.8llf\n", f);
    }
    else if (x <= 52500.0)
    {
        ld f = (x + 7500.0) / .4;
        // f += 125000.0;
        cout << setprecision(8) << f << endl;
        // printf("%.8llf\n", f);
    }
    else
    {
        ld f = x + 15000.0;
        f /= .45;
        cout << setprecision(8) << f << endl;
        // printf("%.8llf\n", f);
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