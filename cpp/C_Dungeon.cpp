// Author: ayon6594
// Date: 2025-11-06
// Time: 21:42:53

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
ll e = 1;
void solve()
{
    ll n, m;
    cin >> n >> m;
    // vector<ll> x;
    multiset<ll> x;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        // x.pb(t);
        x.insert(t);
    }
    // sort(all(x));
    // vector<ll> t1;
    // for (int i = 0; i < m; i++)
    // {
    //     ll r;
    //     cin >> r;
    //     t1.pb(r);
    // }
    vector<ll> tp;
    for (int i = 0; i < m; i++)
    {
        ll r;
        cin >> r;
        tp.pb(r);
    }
    // vector<ll> tk;
    vector<pair<ll,ll>> jodina_hoy;
    vector<pair<ll, ll>> jodi_hoy;
    for (int i = 0; i < m; i++)
    {
        ll q;
        cin >> q;
        if(q>0){
            jodi_hoy.pb({tp[i], q*-1});
        }
        else{
            jodina_hoy.pb({tp[i], q*-1});
        }
    }
    sort(all(jodi_hoy));
    sort(all(jodina_hoy));
    int ct = 0;
    for (int i = 0; i < jodi_hoy.size(); i++)
    {
        auto fd = x.lower_bound(jodi_hoy[i].ff);
        if (fd != x.end())
        {
            ll val = *fd;
            // debug(val);
            x.erase(fd);
            // debug(e);
            // cout << "\n---------------------" << endl;
            // for(auto v:x){
            //     cout << v << " ";
            // }
            // cout << "\n-----------------------------" << endl;
            // if (jodi_hoy[i].ss*-1 > 0)
            // {
                x.insert(max(jodi_hoy[i].ss*-1, val));
                // continue;
            // }
            // x.pb(max(jodi_hoy[i].ss, val));
            ct++;
        }
    }
    if(x.size()==0){
        cout << ct << endl;
        return;
    }
    vector<ll> notun;
    for(auto v:x){
        notun.pb(v);
    }
    ll tt = 0;
    for (int i = 0; i < notun.size(); i++)
    {
        if(tt>=jodina_hoy.size()){
            break;
        }
        // debug(i);
        // debug(tt);
        if(notun[i]>=jodina_hoy[tt].ff)
        {
            ct++;
            tt++;
        }
    }
    cout << ct << endl;
    e++;
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