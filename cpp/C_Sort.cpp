// Author: ayon6594
// Date: 2025-11-01
// Time: 21:02:36

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
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<vector<int>> p(n + 1, vector<int>(26, 0));
    // set<char> rp;
    // map<vector, ll> ma;
    vector<vector<int>> d(n + 1, vector<int>(26, 0));
    // ll tr = 0;
    // ll ct = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            p[i+1][j] = p[i][j];
            d[i+1][j] = d[i][j];
        }
        ll a1 = a[i] - 'a';
        ll b1 = b[i] - 'a';
        p[i+1][a1]++;
        d[i+1][b1]++;
        // debug(a1);
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int mat = 0;
        for (int j = 0; j < 26; j++)
        {
            int x = p[r][j] - p[l-1][j];
            int y = d[r][j] - d[l-1][j];
            if (x >= y)
            {
                mat += (x - y);
            }
        }
        cout << mat << endl;
    }
}
int main()
{
    op();
    test(t)
    {
        solve();
    }
    return 0;
}