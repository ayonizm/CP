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
    vector<int> x(n);
    vector<vector<int>> p(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        p[x[i]].pb(i);
    }
    vector<ll> dp(n, 0);
    vector<ll> ay(n, 0);
    vector<int> ct(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int kp = x[i];
        ct[kp]++;
        ll k = ct[kp];
        if (k >= kp)
        {
            // ct[kp] = 0;
            int at = p[kp][k - kp];
            ll r;
            if(at>0){
                r = ay[at - 1];
            }
            else{
                r = 0;
            }
            dp[i] = kp + r;
        }
        // debug(dp[i]);
        if(i==0){
            // ay[i] = 0;
            ay[i] = dp[i];

        }
        else{
            ay[i] = max(ay[i - 1], dp[i]);
        }
    }
    cout << ay[n - 1] << endl;
    // map<ll, ll> x;
    // ll sm = 0;
    // for (ll i = 0; i < n; i++){
    //     ll t;
    //     cin >> t;
    //     x[t]++;
    //     if(x[t]==t){
    //         x[t] = 0;
    //         sm += t;
    //     }
    // }
    // for (auto v : x)
    // {
        // int r = ((v.ss / v.ff) * v.ff);
        // debug(r);
    //     sm += ((v.ss / v.ff) * v.ff);
    // }
    // cout << sm << endl;
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}
