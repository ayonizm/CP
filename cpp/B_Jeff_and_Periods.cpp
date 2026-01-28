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
    map<ll, ll> x1, x2, p;
    set<ll> p1, p2;

    for (ll i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        p1.insert(t);
        x1[t]++;

        if (x1[t] == 1)
        {
            p[t] = i;
        }
        else if (x1[t] == 2)
        {
            x2[t] = i - p[t];
            p[t] = i;
        }
        else
        {
            ll r = i - p[t];
            if (r != x2[t])
            {
                p2.insert(t);
                x2[t] = LLONG_MIN;
            }
            else
            {
                p[t] = i;
            }
        }
    }

    cout << p1.size() - p2.size() << endl;
    for (ll v : p1)
    {
        if (x1[v] == 1)
        {
            cout << v << " 0" << endl;
        }
        else if (x2[v] != LLONG_MIN)
        {
            cout << v << " " << x2[v] << endl;
        }
    }
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}