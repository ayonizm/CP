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
    ll n;
    cin >> n;
    vector<int> x;
    map<int, int> m;
    int r = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
        m[t]++;
        r = max(r, m[t]);
    }
    if(m.size()==1){
        cout << 0 << endl;
        return;
    }
    if(x.size()==2){
        cout << 2 << endl;
        return;
    }
    ll p = n - r;
    ll ct = 0;
    while (r < n)
    {
        ct++;
        r *= 2;
    }
    cout << p + ct << endl;
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