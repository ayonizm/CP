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
    vector<ll> v;

    vector<pair<ll, ll>> vec;

    for (ll i = 0; i < a; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    pair<ll, ll> pr = {INT_MAX, INT_MAX};
    ll sum = 0;
    ll p = 0;
    for (ll i = 0; i < a; i++)
    {

        sum += v[i];
        if ((i - p + 1) == b)
        {
            // debug(sum);
            if (sum < pr.first)
            {
                pr.first = sum;
                pr.second = i - b + 2;
            }
            // debug(pr.first);
            // debug(pr.second);
            sum -= v[p];
            p++;
        }

        if (i == a - 1 && p == a - b)
        {
            break;
        }
    }

    cout << pr.second << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}