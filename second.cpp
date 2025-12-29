// Author: ayon6594
// Date: 2025-11-14
// Time: 16:47:46

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
int ct = 1;
void solve()
{
    cout << "Case " << ct++ << ": ";
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
    }
    vector<int> shuru(n);
    int w = 0;
    for (int i = 0; i < n; i++)
    {
        shuru[i]=w;
        w = max(w, x[i]);
    }
    vector<int> sesh(n);
    w = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        sesh[i]=w;
        w = min(w, x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] > shuru[i] && x[i] < sesh[i])
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << "Humanity is doomed!" << endl;
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