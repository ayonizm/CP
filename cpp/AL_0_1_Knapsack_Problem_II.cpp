// #include <bits/stdc++.h>
// using namespace std;
// #define op()                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define test(t) \
//     ll t;       \
//     cin >> t;   \
//     while (t--)
// #define MOD 1000000007
// #define MOD1 998244353
// #define endl "\n"
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(vec) vec.begin(), vec.end()
// #define PI 3.141592653589793238462
// #define debug(x) cout << #x << " " << x << endl;
// #define ll long long int
// int main()
// {
//     op();
//     ll n, m;
//     cin >> n >> m;
//     vector<ll> weight(n);
//     vector<ll> val(n);
//     vector<vector<ll>> dp(n, vector<ll>(m + 1, 0));
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> val[i] >> weight[i];
//     }
//     for (ll j = 0; j <= m; j++)
//     {
//         if (j >= weight[0])
//         {
//             dp[0][j] = val[0];
//         }
//     }
//     for (ll i = 1; i < n; i++)
//     {
//         for (ll j = 0; j <= m; j++)
//         {
//             ll not_pick = dp[i - 1][j];
//             ll pick = LLONG_MIN;
//             if (weight[i] <= j)
//             {
//                 pick = val[i] + dp[i - 1][j - weight[i]];
//             }
//             dp[i][j] = max(pick, not_pick);
//         }
//     }
//     cout << dp[n - 1][m] << endl;

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

using ld = long double;

int knapsack(int n, int W, vector<int> &wt, vector<int> &val)
{
    vector<int> dp(W + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int w = W; w >= wt[i]; w--)
        {
            dp[w] = max(dp[w], dp[w - wt[i]] + val[i]);
        }
    }
    return dp[W];
}

int main()
{
    int n, W;
    cin >> n >> W;
    vector<int> wt(n), val(n);
    for (int i = 0; i < n; i++)
    {
        cin >> val[i] >> wt[i];
    }
    cout << knapsack(n, W, wt, val) << "\n";
    return 0;
}
