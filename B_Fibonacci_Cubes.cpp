#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
#define endl "\n"
#define vec vector
#define pii pair<int, int>
#define se second
#define fi first
#define pb push_back
#define maxel(v) *max_element(v.begin(), v.end())
#define minel(v) *min_element(v.begin(), v.end())
#define yes cout << "YES\n";
#define no cout << "NO\n";
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll mod = 1e9 + 7;
const ll mod2 = 1e9 + 9;
const ll mod3 = 998244353;
const double pi = 3.141592653589793238;
const long double EPS = 1e-9;
const int MAXN = 1e5 * 5;
const int LOGN = __lg(MAXN) + 1;
const int INF = 1000000007;
const int MAX_N = 10;
const int MAX_DIM = 150;
static vector<vector<vector<vector<int>>>> bt_lst;
static int f_arr[MAX_N];
static bool chk(const vector<int> &b, int w, int h)
{
    int usedH = 0, rowW = 0, rowH = 0;
    for (int s : b)
    {
        if (s > w || s > h)
            return false;
        if (rowW + s <= w)
        {
            rowW += s;
            if (s > rowH)
                rowH = s;
        }
        else
        {
            usedH += rowH;
            if (usedH + s > h)
                return false;
            rowW = s;
            rowH = s;
        }
    }
    usedH += rowH;
    return usedH <= h;
}
static void precompute()
{
    bt_lst.assign(MAX_N + 1, vector<vector<vector<int>>>(MAX_DIM + 1));
    for (int n = 2; n <= MAX_N; ++n)
    {
        f_arr[0] = 1;
        f_arr[1] = 2;
        for (int i = 2; i < n; i++)
        {
            f_arr[i] = f_arr[i - 1] + f_arr[i - 2];
        }
        int full_mask = (1 << n) - 1;
        int fmax = f_arr[n - 1];
        vector<int> sum_mask(1 << n, 0);
        for (int mask = 1; mask <= full_mask; ++mask)
        {
            int lsb = mask & -mask;
            int idx = __builtin_ctz(lsb);
            sum_mask[mask] = sum_mask[mask ^ lsb] + f_arr[idx];
        }

        vector<int> dp(1 << n);
        for (int H = 1; H <= MAX_DIM; ++H)
        {
            if (H < fmax)
                continue;
            dp[0] = 0;
            for (int mask = 1; mask <= full_mask; ++mask)
            {
                if (sum_mask[mask] <= H)
                {
                    dp[mask] = 1;
                }
                else
                {
                    int best = n + 1;
                    int s = (mask - 1) & mask;
                    while (s)
                    {
                        if (sum_mask[s] <= H)
                        {
                            int other = mask ^ s;
                            best = min(best, dp[other] + 1);
                        }
                        s = (s - 1) & mask;
                    }
                    dp[mask] = best;
                }
            }
            int S = dp[full_mask];
            if (S > n)
                continue;
            vector<vector<int>> valid_subsets(1 << n);
            for (int mask = 1; mask <= full_mask; ++mask)
            {
                int lsb = mask & -mask;
                int i = __builtin_ctz(lsb);
                int rem = mask ^ (1 << i);
                int s = rem;
                while (true)
                {
                    int s_full = s | (1 << i);
                    if (sum_mask[s_full] <= H)
                    {
                        valid_subsets[mask].push_back(s_full);
                    }
                    if (!s)
                        break;
                    s = (s - 1) & rem;
                }
            }
            set<vector<int>> bottom_sets;
            vector<int> bottoms;
            function<void(int, int)> dfs = [&](int rem_mask, int bins_left)
            {
                if (bins_left == 1)
                {
                    if (sum_mask[rem_mask] <= H)
                    {
                        int idx = 31 - __builtin_clz(rem_mask);
                        bottoms.push_back(f_arr[idx]);
                        vector<int> bl = bottoms;
                        sort(bl.begin(), bl.end(), greater<int>());
                        bottom_sets.insert(bl);
                        bottoms.pop_back();
                    }
                    return;
                }
                for (int s : valid_subsets[rem_mask])
                {
                    int idx = 31 - __builtin_clz(s);

                    bottoms.push_back(f_arr[idx]);
                    dfs(rem_mask ^ s, bins_left - 1);
                    bottoms.pop_back();
                }
            };
            dfs(full_mask, S);
            auto &out_list = bt_lst[n][H];
            out_list.reserve(bottom_sets.size());
            for (auto &bl : bottom_sets)
            {
                out_list.push_back(bl);
            }
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<array<int, 3>> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i][0] >> b[i][1] >> b[i][2];
    }
    vector<int> f_n(n);
    f_n[0] = 1;
    if (n >= 2)
        f_n[1] = 2;
    for (int i = 2; i < n; i++)
    {
        f_n[i] = f_n[i - 1] + f_n[i - 2];
    }
    int fmax = f_n[n - 1];

    string ans;
    ans.reserve(m);
    for (int i = 0; i < m; i++)
    {
        int dims[3] = {b[i][0], b[i][1], b[i][2]};
        bool ok = false;
        for (int hidx = 0; hidx < 3 && !ok; hidx++)
        {
            int H = dims[hidx];
            if (H < fmax)
                continue;
            int b1 = dims[(hidx + 1) % 3], b2 = dims[(hidx + 2) % 3];
            auto &bottom_lists = bt_lst[n][H];
            if (bottom_lists.empty())
                continue;
            for (auto &bl : bottom_lists)
            {
                if (chk(bl, b1, b2) || chk(bl, b2, b1))
                {
                    ok = true;
                    break;
                }
            }
        }
        ans.push_back(ok ? '1' : '0');
    }
    cout << ans << "\n";
}

signed main()
{
    precompute();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; ++i)
        solve();
}
