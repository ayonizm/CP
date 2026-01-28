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
    ll a;
    cin >> a;
    vector<int> x;
    int k = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        int r;
        cin >> r;
        x.pb(r);
    }
    sort(all(x));
    for (int i = 0; i < a-1; i++)
    {
        k = min(k, abs(x[i] - x[i + 1]));
    }
    cout << k << endl;
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