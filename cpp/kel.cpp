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
int p = INT_MAX;
void solve(int n, vector<int> x, int l, int r, int idx)
{
    if (idx == n)
    {
        p = min(p, abs(l - r));
        return;
    }
    solve(n, x, l + x[idx], r, idx + 1);
    solve(n, x, l, r + x[idx], idx + 1);
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
    }

    solve(n, x, 0, 0, 0);
    cout << p << endl;
    // }
    return 0;
}