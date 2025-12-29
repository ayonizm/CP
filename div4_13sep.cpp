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
    ll n, m;
    cin >> n >> m;
    ll p = 0;
    ll q = 0;
    // int ct;
    // int kp = n - m;
    // vector<pair<int, int>> x;
    ll sm = 0;
    int ovai = INT_MIN;
    for (int i = 0; i < n;i++)
    {
        int a, b;
        cin >> a >> b;
        ovai = max(ovai, a);
        ll d = a - p;
        ll e = (b - q + 2) % 2;
        if ((d % 2) == e)
        {
            sm += d;
        }
        else
        {
            sm +=d;
            sm--;
        }
        // debug(sm);
        p = a;
        q = b;
    }
      ll rp = m - ovai;
    sm +=rp;
    cout << sm << endl;
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test(t){
    solve();
    }
    return 0;
}