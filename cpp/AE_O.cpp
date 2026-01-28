// #include <bits/stdc++.h>
// using namespace std;
// #define op()                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define test(t) \
//     int t;      \
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
// void solve()
// {
//     int n, m;
//     cin >> n >> m;

//     vector<int> coins(m);
//     for (int i = 0; i < m; ++i)
//     {
//         cin >> coins[i];
//     }

//     vector<long long> dp(n + 1, 0);
//     dp[0] = 1; 

//     for (int coin : coins)
//     {
//         for (int i = coin; i <= n; ++i)
//         {
//             dp[i] += dp[i - coin];
//         }
//     }

//     cout << dp[n] << '\n';
// }
// int main()
// {
//     op();
//     // test(t){
//         solve();
//     // }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> coins(n);
//     int sum = 0;
//     for (int i = 0; i < n;i++){
//         cin >> coins[i];
//         sum += coins[i];
//     }
//     if(sum<m){
//         cout<<
//     }
//     vector<int> dp(m + 1, INT_MAX);
//     dp[0] = 0;
//     for (auto coin : coins)
//     {
//         for (int j = coin; j <= m; ++j)
//         {
//             if (dp[j - coin] != INT_MAX)
//                 dp[j] = min(dp[j], dp[j - coin] + 1);
//         }
//     }
//     //jodi intmax er soman hoy taile possible na 
//     if (dp[m] == INT_MAX)
//         cout << "NO\n";
//     else
    
//         cout << "YES\n"<<dp[m];
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t = 1;
//     // cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

void champ()
{
    int n, m;
    cin >> n >> m;

    vector<int> coins(n);
    for (auto &x : coins)
        cin >> x;

    vector<int> dp(m + 1, INT_MAX);
    dp[0] = 0;

    for (int coin : coins)
    {
        for (int j = m; j >= coin; --j)
        {
            if (dp[j - coin] != INT_MAX)
                dp[j] = min(dp[j], dp[j - coin] + 1);
        }
    }

    if (dp[m] == INT_MAX)
        cout << "-1\n";
    else
        cout << dp[m] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
        champ();

    return 0;
}
