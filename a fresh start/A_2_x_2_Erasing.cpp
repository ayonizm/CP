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
    int n, t;
    cin >> n >> t;
    vector<string> x;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        x.pb(s);
    }
    vector<vector<int>> pr(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int ct = 0;
            if (i < n - 1 && j < n - 1)
            {
                if (x[i][j] == '.' && x[i][j + 1] == '.' && x[i + 1][j] == '.' && x[i + 1][j + 1] == '.')
                {
                    ct = 1;
                }
            }
            // cout << i << " " << j << endl;
            // debug(x[i][j]);
            pr[i + 1][j + 1] = ct + pr[i][j + 1] + pr[i + 1][j] - pr[i][j];
            // debug(pr[i][j]);
            // debug(pr[i+1][j+1]);
        }
    }
    while (t--)
    {
        int t1, t2, t3, t4;
        cin >> t1 >> t2 >> t3 >> t4;
        int ay = pr[t2 - 1][t4 - 1] - pr[t1 - 1][t4 - 1] - pr[t2 - 1][t3 - 1] + pr[t1 - 1][t3 - 1];
        cout << ay << endl;
    }
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}