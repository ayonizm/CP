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
bool cmp(pair<double, ll> &a, pair<double, ll> &b)
{
    if (a.first != b.first)
        return a.first > b.first; 
    return a.second < b.second;   
}
int main()
{
    op();
    ll n;
    cin >> n;
    vector<ll> a;
    vector<ll> b;
    for (ll i = 0; i < n; i++)
    {
        ll x1, x2;
        cin >> x1 >> x2;
        a.pb(x1);
        b.pb(x2);
    }
    vector<pair<double, ll>> p;
    ll r = 1;
    for (int i = 0; i < n; i++)
    {
        double y = ((double)a[i] / (double)((double)a[i] + (double)b[i]));
        p.pb({y, r});
        r++;
    }
    sort(all(p), cmp);
    for(auto v:p){
        cout << v.second << " ";
    }

    return 0;
}