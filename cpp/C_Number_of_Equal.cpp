#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
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
    vector<ll> x(a);
    vector<ll> y(b);
    for (ll i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    for (ll i = 0; i < b; i++)
    {
        cin >> y[i];
    }



    ll i = 0, j = 0;
    vector<ll> c;
    while (j < b)
    {
        ll curr = y[j];
        ll ct = 0;

     
        while (i < a && x[i] < curr){
            i++;
        }

        while (i < a && x[i] == curr)
        {
            ct++;
            i++;
        }

       
        ll ay2 = 0;
        while (j < b && y[j] == curr)
        {
            ay2++;
            j++;
        }

        for (ll k = 0; k < ay2; k++)
        {
            c.pb(ct);
        }
    }

    ll sum = 0;
    for (auto v : c)
    {
        sum += v;
    }
    cout << sum << endl;
}

int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}
