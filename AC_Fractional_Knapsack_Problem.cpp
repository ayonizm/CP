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
    vector<pair<pair<double, double>, double>> x;
    int n;
    cin >> n;
    int res;
    cin >> res;
    int k = n;
    while (n--)
    {
        double p, q;
        cin >> p >> q;                
        x.push_back({{p / q, p}, q}); 
    }
    sort(all(x), greater<pair<pair<double, double>, double>>());
    int tr = 0;
    double pp = 0;
    while (res > 0&&tr<k)
    {
        if (res - x[tr].ss >= 0)
        {
            pp += (x[tr].ff.ss);
        }
        else
        {
            pp += (x[tr].ff.ff) * res;
        }
        res -= x[tr].ss;
        // debug(res);
        tr++;
    }
    ll kk = pp;
    double k1 = kk;
    if (abs(kk - pp) == 0.0)
    {
        cout << kk << endl;
    }
    else
    {
        printf("%.8lf\n", pp);
    }
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}