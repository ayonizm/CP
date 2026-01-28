// Author: ayon6594
// Date: 2025-11-10
// Time: 21:50:01

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
    int mn = INT_MAX;
    int mx = INT_MIN;
    set<char> rp;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
        if (t == 1)
        {
            mn = i;
        }
        if (t == n)
        {
            mx = i;
        }
    }
    string s;
    cin >> s;
    string l = s;
    if (s[0] == '1' || s[n - 1] == '1' || s[mn] == '1' || s[mx] == '1')
    {
        cout << -1 << endl;
        return;
    }
    sort(all(l));
    if ((l[l.length() - 1] == '0'))
    {
        cout << 0 << endl;
        return;
    }
    cout << 5 << endl;
    cout << 1 << " " << mn+1 << endl;
    cout << 1 << " " << mx+1 << endl;
    cout << min(mn+1, mx+1) << " " << max(mn+1, mx+1) << endl;
    cout << mn+1 << " " << n << endl;
    cout << mx+1 << " " << n << endl;
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test(t)
    {
        solve();
    }
    return 0;
}