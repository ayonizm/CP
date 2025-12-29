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
#define rall(vec) vec.rbegin(), vec.rend()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int

int main()
{
    op();
    ll n, d, r;

    while (1)
    {
        ll sum = 0;
        cin >> n >> d >> r;
        if (n == 0 && d == 0 && r == 0)
        {
            break;
        }
        vector<int> x1, x2;
        for (int i = 0; i < n; i++)
        {

            ll a;
            cin >> a;
            x1.pb(a);
        }
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            x2.pb(a);
        }
        sort(all(x1));
        sort(rall(x2));
        for (int i = 0; i < x1.size(); i++)
        {
            ll k = x1[i] + x2[i];
            if (k > d)
            {
                k -= d;
            }
            else
            {
                k = 0;
            }
            sum += (k * r);
        }

        cout << sum << endl;
    }

    return 0;
}