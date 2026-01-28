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
const ll mod = 100000007;
int ct = 1;
void solve()
{
    int n, target;
    cin >> n >> target;

    vector<ll> v(n), limit(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        limit[i] = target;

    vector<ll> dp(target + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        vector<ll> ndp = dp;
        for (int rem = 0; rem <= target; rem++)
        {
            if (dp[rem] == 0)
                continue;
            for (int k = 1; k <= limit[i]; k++)
            {
                int nxt = rem + k * v[i];
                if (nxt > target)
                    break;
                ndp[nxt] = (ndp[nxt] + dp[rem]) % mod;
            }
        }
        dp = ndp;
    }

    cout << "Case "<<ct++<<": "<<dp[target] % mod << "\n";
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}