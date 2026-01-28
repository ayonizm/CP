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
// int f(int n,vector<int>&x){
//     if(n<=1){
//         return n;
//     }
//     if(x[n]!=-1){
//         return x[n];
//     }
//     x[n] = f(n - 1, x) + f(n - 2, x);
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> x(n + 1, -1);
//     x[0] = 0;
//     x[1] = 1;
//     f(n, x);
//     cout << x[n];
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
// int r = INT_MIN;
// int f(int n,vector<int>&x,vector<int>&dp){
//     if(n==0){
//         return x[n];
//     }
//     if(n<0){
//         return 0;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     int pick = x[n] + f(n - 2, x, dp);
//     int not_pick = 0 + f(n - 1, x, dp);
    
//     return dp[n] = max(pick, not_pick);
// }
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> x;
//     vector<int> dp(n + 1, -1);
//     for (int i = 0; i < n; i++)
//     {
//         int t;
//         cin >> t;
//         x.pb(t);
//     }
//     cout << f(n - 1, x, dp);
// }
// int main()
// {
//     op();
//     // test(t){
//         solve();
//     // }
//     return 0;
// }

// 0 1 knapsack***************************************************
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
int f(int idx,int w,vector<int>&val,vector<int>weigth,vector<vector<int>>&dp){
    if(idx==0){
        if(weigth[idx]<=w){
            return val[idx];
        }
        else{
            return 0;
        }
    }
    if(dp[idx][w]!=-1){
        return dp[idx][w];
    }
    
    int not_pick = 0 + f(idx - 1, w, val, weigth, dp);
    int pick = INT_MIN;
    if(weigth[idx]<=w){
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
    vector<vector<int>> dp(n, vector<int>(m + 1, -1));
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
        cin >> val[i];
    }
    cout << f(n - 1, m, val, weight, dp);

    return 0;
}