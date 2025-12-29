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
int n, m;
vector<int>path;
void prt(vector<int>&r){
    for(auto v:r){
        cout << v << " ";
    }
    cout << endl;
}
void solve(vector<vector<int>>&x,int i,int j)
{
    if(i==n-1&&j==m-1){
        path.pb(x[i][j]);
        prt(path);
        path.pop_back();
        return;
    }
    if(i<0||j<0||i>=n||j>=m){
        return;
    }
    path.pb(x[i][j]);
    if(i+1<n){
        solve(x, i + 1, j);
    }
    if(j+1<m){
        solve(x, i, j+1);
    }
    path.pop_back();
    return;
}
int main()
{
    op();
    cin >> n >> m;
    vector<vector<int>>x(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x[i][j];
        }
    }
    solve(x, 0, 0);

    return 0;
}