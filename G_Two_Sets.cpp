#include <bits/stdc++.h>
#include <iterator>
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
    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    ll target = sum / 2;
    vector<ll> l, r;
    ll ay = 0;
    for (ll i = n; i >= 1; i--)
    {
        if (ay + i <= target)
        {
            l.pb(i);
            ay += i;
        }
        else
        {
            r.pb(i);
        }
    }
    cout << "YES" << endl;
    cout << l.size() << endl;
    sort(all(l));
    for (auto v : l)
    {
        cout << v << " ";
    }
    cout << endl;

    cout << r.size() << endl;
    sort(all(r));
    for (auto v : r)
    {
        cout << v << " ";
    }
    cout << endl;
}

int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}
