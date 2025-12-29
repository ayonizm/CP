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

int bounded_knapsack(int n, int W, vector<int> &val, vector<int> &wt, vector<int> &lim)
{
    vector<int> dp(W + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int count = lim[i];
        int value = val[i];
        int weight = wt[i];

        for (int k = 1; count > 0; k <<= 1)
        {
            int take = min(k, count);
            int v = take * value;
            int w = take * weight;

            for (int j = W; j >= w; j--)
            {
                dp[j] = max(dp[j], dp[j - w] + v);
            }
            count -= take;
        }
    }
    return dp[W];
}
void solve()
{
    int n, W;
    cin >> n >> W;

    vector<int> val(n), wt(n), lim(n);
    for (int i = 0; i < n; i++)
    {
        cin >> val[i] >> wt[i] >> lim[i];
    }

    cout << bounded_knapsack(n, W, val, wt, lim) << "\n";
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}