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
    cin >> n;
    ll y = 1;
    while (n--)
    {
        ll k;
        cin >> k;
        map<ll, string> x;
        for (int i = 0; i < k; i++)
        {
            ll f1;
            cin >> f1;
            string s;
            cin >> s;
            x[f1] = s;
        }
        int f = 1;
        vector<int> ay;
        ay.pb(f);
        ll ct = 0;
        for (int i = 0; i < k; i++)
        {
            f = f + i + 2;
            if (f <= k)
            {
                ct++;
                ay.pb(f);
            }
        }
        vector<string> lk;
        for (auto v : ay)
        {
            lk.pb(x[v]);
        }
        cout << "Case " << y++ << ": ";
        for (auto v : lk)
        {
            cout << v << " ";
        }
        cout << endl;
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