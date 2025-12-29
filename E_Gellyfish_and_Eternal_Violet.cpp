#include <bits/stdc++.h>
using namespace std;

struct VectorHash
{
    size_t operator()(const vector<int> &v) const
    {
        size_t seed = 0;
        for (int x : v)
        {
            seed ^= hash<int>{}(x) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        }
        return seed;
    }
};

struct PairVectorHash
{
    size_t operator()(const pair<int, vector<int>> &p) const
    {
        size_t seed = 0;
        seed ^= hash<int>{}(p.first) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        VectorHash hasher;
        seed ^= hasher(p.second) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        return seed;
    }
};

double dp(int round, vector<int> &hist, int max_diff, int n, int m, double p,
          unordered_map<pair<int, vector<int>>, double, PairVectorHash> &memo)
{
    pair<int, vector<int>> key = {round, hist};
    if (memo.count(key))
        return memo[key];

    if (round == m)
    {
        if (hist[0] == n)
            return 1.0;
        return 0.0;
    }

    double prob = 0.0;

    // Shine case
    bool can_shine = true;
    for (int d = 1; d <= max_diff; d++)
    {
        if (hist[d] > 0 && d == 1)
        {
            can_shine = false;
            break;
        }
    }
    if (can_shine && hist[0] < n)
    {
        vector<int> new_hist = hist;
        for (int d = max_diff; d >= 1; d--)
        {
            new_hist[d] = 0;
            if (d > 0)
                new_hist[d - 1] = hist[d];
        }
        new_hist[0] = hist[0];
        prob += p * dp(round + 1, new_hist, max_diff, n, m, p, memo);
    }
    else
    {
        prob += p * dp(round + 1, hist, max_diff, n, m, p, memo);
    }

    // Non-shine case
    int count = 0;
    for (int d = 1; d <= max_diff; d++)
    {
        count += hist[d];
    }
    if (count == 0)
    {
        prob += (1 - p) * dp(round + 1, hist, max_diff, n, m, p, memo);
    }
    else
    {
        double sum_prob = 0.0;
        for (int d = 1; d <= max_diff; d++)
        {
            if (hist[d] > 0)
            {
                vector<int> new_hist = hist;
                new_hist[d]--;
                new_hist[d - 1]++;
                sum_prob += hist[d] * dp(round + 1, new_hist, max_diff, n, m, p, memo);
            }
        }
        prob += (1 - p) * (sum_prob / count);
    }

    memo[key] = prob;
    return prob;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, p_int;
        cin >> n >> m >> p_int;
        double p = p_int / 100.0;

        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        vector<int> diff(n);
        for (int i = 0; i < n; i++)
        {
            diff[i] = h[i] - 1;
        }
        int max_diff = 0;
        for (int d : diff)
        {
            max_diff = max(max_diff, d);
        }
        if (max_diff == 0)
        {
            cout << fixed << setprecision(6) << 1.0 << "\n";
            continue;
        }

        vector<int> hist(max_diff + 1, 0);
        for (int d : diff)
        {
            hist[d]++;
        }

        unordered_map<pair<int, vector<int>>, double, PairVectorHash> memo;
        double ans = dp(0, hist, max_diff, n, m, p, memo);
        cout << fixed << setprecision(6) << ans << "\n";
    }
    return 0;
}