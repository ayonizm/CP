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
    ll q;
    cin >> q;
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll a = 0;
    ll b = 0;
    ll sum = 0;
    ll ct = 0;
    for (ll i = 0; i < n; i++)
    {
        if (sum < q)
        {
            sum += ar[i];
        }

        if (sum > q)
        {
            while (sum > q)
            {
                sum -= ar[b++];
            }
        }

        if (sum == q)
        {
            ct++;
            sum -= ar[b++];
        }
    }

    cout << ct << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}