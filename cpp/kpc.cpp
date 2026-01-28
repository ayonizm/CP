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
/*for big long long while multiplication __int128 is used*/
void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll t = 1;
    for (ll i = 0; i < k; i++)
    {
        t *= 10;
    }

    __int128 ans = 1;

    for (ll i = 0; i < n; i++)
    {
        ans *= a[i];
        if (ans >= t)
        {
            ans = 1;
        }
    }

    cout << (ll)ans << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}