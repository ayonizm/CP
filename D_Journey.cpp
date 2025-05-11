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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int sum = a + b + c;
    int d = n / sum * 3;
    int re = n % sum;
    if (re == 0)
    {
        cout << d << endl;
    }
    else if (re <= a)
    {
        cout << d + 1 << endl;
    }
    else if (re <= a + b)
    {
        cout << d + 2 << endl;
    }
    else
    {
        cout << d + 3 << endl;
    }
}
int main()
{
    op();
    test(a)
    {
        solve();
    }
    return 0;
}