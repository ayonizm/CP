// Author: ayon6594
// Date: 2025-11-03
// Time: 01:30:24

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
void solve()
{
    int n;
    int m;
    cin >> n >> m;
    set<vector<vector<char>>> x;
    vector<vector<char>> c;
    for (int i = 0; i < n; i++)
    {
        vector<char> l;
        for (int j = 0; j < n; j++)
        {
            char r;
            cin >> r;
            l.pb(r);
        }
        c.pb(l);
    }
    for (int i = 0; i + m <= n; i++)
    {
        for (int j = 0; j + m <= n; j++)
        {
            vector<vector<char>> temp;
            for (int k = i; k < i + m; k++)
            {
                vector<char> row;
                for (int o = j; o < j + m; o++){
                    row.pb(c[k][o]);
                }
                temp.pb(row);
            }
            x.insert(temp);
        }
    }
    cout << x.size() << endl;
}
int main()
{
    op();
    // test(t)
    // {
        solve();
    // }
    return 0;
}