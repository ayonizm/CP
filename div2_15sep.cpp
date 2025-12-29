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
    cin >> n;
    vector<int> x;
    set<int> p;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        t = t % 3;
        x.pb(t);
        sum += x[i];
        p.insert(t);
    }
    if (sum % 3 != 0)
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        //    map<int, int> m;
        //    for (int i = 0; i < n; i++)
        //    {
        //        if (m[x[i]] == 0)
        //        {
        //            m[x[i]]++;
        //        }
        //    }
        cout << 1 << " " << n - 1 << endl;
    }
    // cout << p.size() << endl;
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test(t)
    {
        solve();
    }
    return 0;
}