// Author: ayon6594
// Date: 2025-11-16
// Time: 21:16:39

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
    vector<ll> a(n+1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // a.pb(a[0]);
    a[n] = a[0];
    ll tt = 0;
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        // if(i==n){
        //     i = 0;
        // }
        // debug(i);
        ll ay = max(a[i], a[i + 1]);
        tt += ay;
        mx = max(mx, ay);
    }
    cout << tt-mx << endl;
}
int main()
{
    op();
    test(t){
    solve();
    }
    return 0;
}