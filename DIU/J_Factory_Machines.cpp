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
int main()
{
    op();
    
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector<ll> x;
    for (int i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        x.pb(p);
    }
    sort(all(x));
    long long lo = 0;
    long long hi = 1e18;
    long long ay = 1e18;

    while (lo <= hi)
    {
        long long mid = (lo + hi) / 2;
        long long pr = 0;

        for (int i = 0; i < n; i++)
        {
            pr += min(mid / x[i], (long long)1e9);
        }

        if (pr >= k)
        {
            if (mid < ay)
            {
                ay = mid;
            }
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    cout << ay;

    return 0;
}