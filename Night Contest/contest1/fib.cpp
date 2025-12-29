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
int mx = INT_MAX;
int solve(vector<vector<int>>&x,int n,int m,int i,int j,int sum){
    
    if(i==n&&j==m){
        
        return sum;
    }
    if(i<n&&j==m){
        return sum;
    }
    if(i==n&&j<m){
        return sum;
    }
    
    int l = solve(x,n,m,i,j+1,sum+x[i][j]);
    int r = solve(x,n,m,i+1,j,sum+x[i][j]);
    return max(l, r);
}

int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // test(t){
    int n, m;
    cin >> n >> m;
    vector<vector<int>>x;
    for (int i = 0; i < n; i++)
    {
        vector<int> tp;
        for (int j = 0; j < m; j++)
        {
            int t;
            cin >> t;
            tp.pb(t);
        }
        x.pb(tp);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    int ans = solve(x, n, m, 0, 0, 0);
    cout << ans << endl;
    return 0;
}