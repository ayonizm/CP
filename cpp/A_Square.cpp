// Author: ayon6594
// Date: 2025-11-04
// Time: 21:59:38

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
    vector<vector<int>> a(4, vector<int>(2));
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<int> x;
    for (auto p : a)
    {
        x.pb(p[0]);
    }
    ll k = *max_element(all(x)) - *min_element(all(x));
    cout << k * k << endl;
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