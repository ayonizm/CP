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
vector<string> p;
ll n, k;

void f(string &s, ll n, bool u[], ll k)
{
    if (s.size() == n)
    {
        p.pb(s);
        return;
    }
    if (p.size() >= k)
    {
        return;
    }
    for (ll i = 0; i < n;i++)
    {
        if (u[i] == false)
        {
            s.push_back('A' + i);
            u[i] = true;
            f(s, n, u, k);
            s.pop_back();
            u[i] = false;
            if (p.size() >= k)
            {
                return;
            }
        }
    }
}

void solve()
{
    cin >> n >> k;
    bool u[26]={false};
    string s = "";
    p.clear();
    f(s, n, u, k);
    ll c = 0;
    for (auto x : p)
    {
        if (c < k)
        {
            cout << x << endl;
            c++;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    op();
    ll ay;
    cin >> ay;
    for (ll i = 1; i <= ay; i++)
    {
        cout << "Case " << i << ":" << endl;
        solve();
    }
    return 0;
}