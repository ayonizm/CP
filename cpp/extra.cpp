#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int bounded_knapsack(int n, int W, vector<int> &wt, vector<int> &val, int m)
{
    vector<int> dp(W + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int count = m;
        int weight = wt[i];
        int value = val[i];
        for (int k = 1; count > 0; k <<= 1)
        {
            int take = min(k, count);
            int w = take * weight;
            int v = take * value;
            for (int j = W; j >= w; j--)
            {
                dp[j] = max(dp[j], dp[j - w] + v);
            }
            count -= take;
        }
    }
    return dp[W];
}
int main()
{
    int n, W, m;
    cin >> n >> W >> m;vector<int> wt(n), val(n);
    for (int i = 0; i < n; i++){cin >> val[i] >> wt[i];}
    cout << bounded_knapsack(n, W, wt, val, m) << "\n";
    return 0;
}
