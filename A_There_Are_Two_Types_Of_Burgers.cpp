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
    int b, p, f;
    cin >> b >> p >> f;
    int h, c;
    cin >> h >> c;

    int m = b / 2;
    int r = 0;

    for (int i = 0; i <= min(m, p); i++)
    {
        int u = i * 2;
        int v = min((b - u) / 2, f);
        int s = i * h + v * c;
        r = max(r, s);
    }

    cout << r << endl;
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}