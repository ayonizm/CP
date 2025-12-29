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
    ll n, k;
    cin >> n >> k;
    vector<ll> x(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    ll sum = 0, j = 0;
    ll ay = 0;

    for (ll i = 0; i < n; i++)
    {
        
        while (sum <= k)
        {
            sum += x[i];
        }
        sum -= x[j++];
        ay = max(ay, sum);
    }
    if(ay==LLONG_MAX){
        cout << "-1" << endl;
        return;
    }

    cout << ay-1 << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}