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
    vector<ll> x;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        x.pb(t);
    }
    ll pr = 1;
    sort(all(x));
    for (ll i = 0; i < n; i++)
    {
        if (x[i] > pr)
        {
            cout << pr << endl;
            return;
        }
        else
        {
            pr += x[i];
        }
    }
    // pr++;
    cout << pr << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}