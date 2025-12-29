// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long int;
// using ld = long double;
// vector<int> lis(const vector<int> &v)
// {
//     int n = v.size();
//     vector<int> dp(n, 1), par(n, -1);
//     int len = 1, last = 0;
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (v[i] > v[j] && dp[j] + 1 > dp[i])
//             {
//                 dp[i] = dp[j] + 1;
//                 par[i] = j;
//             }
//         }
//         if (dp[i] > len)
//         {
//             len = dp[i];
//             last = i;
//         }
//     }
//     vector<int> ans;
//     while (last != -1)
//     {
//         ans.push_back(v[last]);
//         last = par[last];
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// void champ()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &a : v)
//         cin >> a;
//     vector<int> ans = lis(v);
//     cout << ans.size() << "\n";
//     for (int a : ans)
//         cout << a << " ";
//     cout << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int t = 1;
//     // cin >> t;
//     while (t--)
//         champ();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
vector<int> lis(const vector<int> &v)
{
    int n = v.size();
    vector<int> tail, idxs, par(n, -1);
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        auto it = lower_bound(tail.begin(), tail.end(), x);
        int idx = it - tail.begin();

        if (it == tail.end())
        {
            tail.push_back(x);
            idxs.push_back(i);
        }
        else
        {
            *it = x;
            idxs[idx] = i;
        }
        if (idx > 0)
        {
            par[i] = idxs[idx - 1];
        }
    }
    vector<int> lis;
    int cur = idxs.back();
    while (cur != -1)
    {
        lis.push_back(v[cur]);
        cur = par[cur];
    }
    reverse(lis.begin(), lis.end());
    return lis;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &a : v)
        cin >> a;
    vector<int> ans = lis(v);
    cout << ans.size() << "\n";
    for (int x : ans)
        cout << x << " ";
    cout << "\n";
    return 0;
}
