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
bool is_valid(vector<vector<char>> &x, int a, int b, int n)
{
    
    for (int i = a; i < n; i++)
    {
        if (x[i][b] == 'X')
        {
            break;
        }
        if(x[i][b]=='Q'){
            return false;
        }
    }
    for (int i = a; i >=0; i--)
    {
        if (x[i][b] == 'X')
        {
            break;
        }
        if(x[i][b]=='Q'){
            return false;
        }
    }
    for (int i = b; i < n; i++)
    {
        if (x[a][i] == 'X')
        {
            break;
        }
        if(x[a][i]=='Q'){
            return false;
        }
    }
    for (int i = b; i >=0; i--)
    {
        if (x[a][i] == 'X')
        {
            break;
        }
        if(x[a][i]=='Q'){
            return false;
        }
    }
    return true;
}
int mx = INT_MIN;
void solve(int count, vector<vector<char>> &x, int r, int n)
{
    if (r == n)
    {
        mx = max(count, mx);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (x[r][i] == '.' && is_valid(x, r, i, n))
        {
            x[r][i] = 'Q';
            solve(count + 1, x, r, n);
            x[r][i] = '.';
            
        }
    }
    solve(count, x, r + 1, n);
}
int main()
{
    op();
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        vector<vector<char>> x;
        for (int i = 0; i < n; i++)
        {
            vector<char> t;
            for (int j = 0; j < n; j++)
            {
                char p;
                cin >> p;
                t.pb(p);
            }
            x.pb(t);
            t.clear();
        }
        solve(0, x, 0, n);
        cout << mx << endl;
        mx = INT_MIN;
    }

    return 0;
}