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
    int N, W;
    cin >> N >> W;
    vector<int> dp(W + 1);
    vector<int> v(N), w(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> v[i] >> w[i];
    }
    for (int i = 0; i < N; ++i)
    {
        for (int j = w[i]; j <= W; ++j)
        {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[W] << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}