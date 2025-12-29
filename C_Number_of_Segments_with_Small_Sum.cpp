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
    ll s;
    cin >> n >> s;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0, kk = 0;
    ll l = 0;

    for (ll r = 0; r < n; r++)
    {
        
        sum += a[r];
        while (sum >= s)
        {
            sum -= a[l];
            l++;
        }
        kk += (r - l + 1);
    }

    cout << kk << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}