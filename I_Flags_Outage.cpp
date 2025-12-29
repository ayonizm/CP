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
int l = 1;
ll fac(ll x){
    ll sum = 1;
    for (ll i = 1; i <=x; i++)
    {
        sum *= i;
    }
    return sum;
}
void solve()
{
    ll n;
    cin >> n;
    ll p = n * 2;
    double kr = pow(2, n);
    p = fac(p);
    cout <<"Case "<<l++<<": "<<p/(ll)kr << endl;
}
int main()
{
    op();
    // precompute_fac();
    test(t){
        solve();
    }
    return 0;
}