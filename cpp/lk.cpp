// #include <bits/stdc++.h>
// using namespace std;
// #define op()                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define test(t) \
//     int t;      \
//     cin >> t;   \
//     while (t--)
// #define MOD 1000000007
// #define MOD1 998244353
// #define endl "\n"
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(vec) vec.begin(), vec.end()
// #define PI 3.141592653589793238462
// #define debug(x) cout << #x << " " << x << endl;
// #define ll long long int
// void solve()
// {
//     int n;
//     cin >> n;
//     int l;
//     cin >> l;
//     vector<int> x;
//     for (int i = 0; i < n; i++)
//     {
//         int p;
//         cin >> p;
//         x.pb(p);
//     }
//     int rt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int re = abs(rt - x[i]);
//         if(re>l){
//             cout << "No" << endl;
//             return;
//         }
//         rt = x[i];
//     }
//     cout << "Yes" << endl;
// }
// int main()
// {
//     op();
//     // test(t){
//         solve();
//     // }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define op()                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define test(t) \
//     int t;      \
//     cin >> t;   \
//     while (t--)
// #define MOD 1000000007
// #define MOD1 998244353
// #define endl "\n"
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(vec) vec.begin(), vec.end()
// #define PI 3.141592653589793238462
// #define debug(x) cout << #x << " " << x << endl;
// #define ll long long int
// void solve()
// {
//     int n;
//     cin >> n;
//     set<int> x;
//     for (int i = 0; i < n; i++)
//     {
//         int p;
//         cin >> p;
//         x.insert(p);
//     }
//     cout << x.size() << endl;
//     for(auto v:x){
//         cout << v << " ";
//     }
// }
// int main()
// {
//     op();
//     // test(t){
//         solve();
//     // }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// #define op()                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define test(t) \
//     int t;      \
//     cin >> t;   \
//     while (t--)
// #define MOD 1000000007
// #define MOD1 998244353
// #define endl "\n"
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(vec) vec.begin(), vec.end()
// #define PI 3.141592653589793238462
// #define debug(x) cout << #x << " " << x << endl;
// #define ll long long int
// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<pair<int, int>> x;
//     for (int i = 0; i < m; i++)
//     {
//         int k1, k2;
//         cin >> k1 >> k2;
//         x.pb({k1, k2});
//     }
//     // sort(all(x));
//     // for(auto v:x){
//     //     cout << v.first << " ";
//     // }
//     int ct = 0;
//     int k = 0;
//     for (int i = 0; i < m - 1; i++)
//     {
//         if (x[i + 1].first <= x[i].second && x[i + 1].first >= x[i].first)
//         {
//             ct++;
//             k = 1;
//         }
//     }
//     if(k){
//         cout << x.size()-ct << endl;
//     }
//     else{
//         cout << 0 << endl;
//     }
// }
// int main()
// {
//     op();
//     // test(t){
//     solve();
//     // }
//     return 0;
// }
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
    ll n, m;
    cin >> n >> m;

    vector<pair<ll, ll>> t(m);
    for (ll i = 0; i < m; i++)
        cin >> t[i].first >> t[i].second;

    vector<ll> c(n + 1, 0);
    for (ll i = 0; i < m; i++)
        for (ll j = t[i].first; j <= t[i].second; j++)
            c[j]++;

    bool u = false;
    for (ll i = 1; i <= n; i++)
        if (c[i] == 0)
        {
            u = true;
            break;
        }

    if (u)
    {
        cout << 0 << endl;
        return;
    }

    ll l = 1, r = m, a = m;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        vector<pair<ll, ll>> e;
        for (ll i = 0; i < m; i++)
        {
            e.pb({t[i].first, 1});
            e.pb({t[i].second + 1, -1});
        }
        sort(all(e));

        vector<pair<ll, ll>> cov;
        ll ac = 0, p = 1;
        for (ll i = 0; i < e.size(); i++)
        {
            ll pp = e[i].first, d = e[i].second;
            if (pp != p)
            {
                if (ac > 0)
                    cov.pb({p, ac});
                p = pp;
            }
            ac += d;
            if (ac > 0 && p <= n)
                cov.pb({p, ac});
        }

        vector<bool> co(n + 1, false);
        for (ll i = 0; i < cov.size(); i++)
        {
            ll pp = cov[i].first;
            if (pp <= n)
                co[pp] = true;
        }
        bool un = false;
        for (ll i = 1; i <= n; i++)
            if (!co[i])
            {
                un = true;
                break;
            }
        if (un)
        {
            a = m;
            r = m - 1;
            continue;
        }

        vector<ll> w(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            ll ct = 0;
            for (ll j = 0; j < m; j++)
                if (t[j].first <= i && i <= t[j].second)
                    ct++;
            w[i] = ct;
        }

        bool f = false;
        for (ll i = 1; i <= n; i++)
            if (w[i] <= m)
            {
                f = true;
                break;
            }
        if (f)
        {
            a = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }

    cout << a << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}