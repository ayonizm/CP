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
    ll r = LLONG_MAX;
    int idx = 0;
    vector<ll> x;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        if(t<r){
            idx = i;
            r = t;
        }
        x.pb(t);
    }
    x[idx]++;
    ll sum = 1;
    for (int i = 0; i < n; i++)
    {
        sum *= x[i];
    }
    cout << sum << endl;
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