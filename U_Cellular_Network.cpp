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
    int n, m;
    cin >> n >> m;

    vector<int> c(n);
    vector<int> t(m);

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t[i];
    }

    int l = 0, r = 0;
    int sm = 0;

    while (l < n)
    {
        while (r < m - 1 && abs(c[l] - t[r]) >= abs(c[l] - t[r + 1]))
        {
            r++;
        }
        sm = max(sm, abs(c[l] - t[r]));
        l++;
    }

    cout << sm << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}