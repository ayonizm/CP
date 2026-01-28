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
    ll n;
    cin >> n;
    vector<int> x;
    ll r;
    cin >> r;
    for (ll i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        x.pb(p);
    }
    unordered_map<ll, ll> l;
    pair<int, int> d1;
    // ll ans = 0;
    ll j = 0;
    int ree = 0;
    int re = 0;
    for (ll i = 0; i < n; i++)
    {
        l[x[i]]++;
        while (l.size() > r)
        {
            l[x[j]]--;
            if (l[x[j]] == 0)
            {
                l.erase(x[j]);
            }
            j++;
        }
        if (i - j + 1 >= ree)
        {
             re = i - j + 1;

            if (re>ree){
                ree = re;
                d1 = {j, i};
            }
        }
    }
    cout << d1.ff+1 <<" "<<d1.ss+1<< endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}