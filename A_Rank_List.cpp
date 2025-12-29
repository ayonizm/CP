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
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.ff == b.ff){
        return a.ss < b.ss;
    }
    return a.ff > b.ff;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> tt;
    for (int i = 0; i < n; i++)
    {
        ll p, t;
        cin >> p >> t;
        tt.pb({p, t});
    }
    sort(all(tt), comp);
    pair<ll, ll> tr = tt[k - 1];
    ll ct = 0;
    for (auto l : tt)
    {
        if (l == tr){
            ct++;
        }
    }
    cout << ct << endl;
}

int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}