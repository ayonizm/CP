// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using ld = long double;

// int lcs(const string &a, const string &b)
// {
//     int n = a.size(), m = b.size();

//     if (n < m)
//         return lcs(b, a); // ensure a is longer

//     vector<int> prev(m + 1, 0), curr(m + 1, 0);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (a[i - 1] == b[j - 1])
//                 curr[j] = 1 + prev[j - 1];
//             else
//                 curr[j] = max(prev[j], curr[j - 1]);
//         }
//         prev = curr;
//     }

//     return prev[m];
// }

// void champ()
// {
//     string s1, s2;
//     cin >> s1 >> s2;
//     cout << "LCS Length: " << lcs(s1, s2) << "\n";
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
using ld = long double;

void champ()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    string lcs = "";
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            lcs += s1[i - 1];
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    reverse(lcs.begin(), lcs.end());
    cout << "LCS: " << lcs << '\n';
    cout << "Length: " << lcs.size() << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
        champ();

    return 0;
}
