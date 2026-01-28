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
    ll a, b;
    cin >> a >> b;
    vector<ll> x;
    for (int i = 0; i < a; i++)
    {
        ll t;
        cin >> t;
        x.pb(t);
    }
    ll r = min(a, b);
    sort(all(x), greater<ll>());
    ll ct = 0;
    ll j = b;
    for (ll i = 0; i < r; i++)
    {
        ll pt = x[i] * j;
        j--;
        ct += pt;
    }
    cout << ct << endl;
}
int main()
{
    op();
    test(t){
    solve();
    }
    return 0;
}