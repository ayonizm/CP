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
#define MAX 10000000
bool flag[MAX + 1];
ll prime[MAX + 5];
ll total = 0;
vector<ll> getdivisor(ll num)
{
    vector<ll> divisor;
    for (ll i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            divisor.push_back(i);
            if (i != num / i)
            {
                divisor.push_back(num / i);
            }
        }
    }
    sort(divisor.begin(), divisor.end());
    return divisor;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> t;
    vector<ll> r = getdivisor(n);
    if (r.size() == 2)
    {
        cout << 1 << endl;
        cout << r[1] << endl;
        return;
    }
    int k = 0;
    while (k<r.size())
    {
        if (r[k] == 1)
        {
            k++;
        }
        while (n % r[k] == 0)
        {
            t.pb(r[k]);
            n = n / r[k];
        }
        k++;
        if (n == 1)
        {
            break;
        }
        if (flag[n])
        {
            t.pb(n);
            break;
        }
    }
    cout << r.size() << endl;
    for (auto v : t)
    {
        cout << v << " ";
    }
    cout << endl;
}
int main()
{
    op();
    test(t)
    {
        solve();
    }
    return 0;
}