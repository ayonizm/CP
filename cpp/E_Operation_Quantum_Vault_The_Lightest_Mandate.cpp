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
int f(int idx, int w, vector<int> &val, vector<int> weigth, vector<vector<int>> &dp)
{
    if (idx == 0)
    {
        if (weigth[idx] <= w)
        {
            return val[idx];
        }
        else
        {
            return 0;
        }
    }
    if (dp[idx][w] != -1)
    {
        return dp[idx][w];
    }
    int not_pick = 0 + f(idx - 1, w, val, weigth, dp);
    int pick = INT_MIN;
    if (weigth[idx] <= w)
    {
        pick = val[idx] + f(idx - 1, w - weigth[idx], val, weigth, dp);
    }
    return dp[idx][w] = max(pick, not_pick);
}
int main()
{
    op();
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> weight(n);
    vector<int> val(n);
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    int rp = INT_MAX;
    int m_val = 0;
    for (int i = 0; i < n; i++)
    {
        if (rp > weight[i])
        {
            m_val = val[i];
            rp = weight[i];
        }
    }
    vector<int> w1;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        if (m % val[i] != 0)
        {
            w1.pb(weight[i]);
            v1.pb(val[i]);
        }
    }
    int r1 = v1.size();

    vector<vector<int>> dp(r1, vector<int>(m + 1, -1));
    cout << f(r1 - 1, m, v1, w1, dp) + m_val << endl;

    return 0;
}