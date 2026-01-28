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
const int N = 3e5 + 2; // Removed the MOD macro to avoid conflict
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mp[a[i][j]]++;
        }
    }

    vector<int> b;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.pb(x);
    }

    for (auto &x : b)
    {
        vector<int> q;
        q.pb(x);
        while (!q.empty())
        {
            int node = q.back();
            q.pop_back();
            if (mp[node])
            {
                mp[node]--;
                continue;
            }
            q.pb(node / 2);
            q.pb((node + 1) / 2);
            if (node / 2 == 0 || (node + 1) / 2 == 0)
            {
                cout << "No" << endl;
                return;
            }
        }
    }

    for (auto it : mp)
    {
        if (it.second)
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

signed main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}