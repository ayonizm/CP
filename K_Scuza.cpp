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
    ll a, b;
    cin >> a >> b;
    vector<ll> x1;
    for (int i = 0; i < a; i++)
    {
        ll p;
        cin >> p;
        x1.pb(p);
    }
    
    vector<ll> pre;
    pre.pb(x1[0]);
    for (int i = 1; i < x1.size(); i++)
    {
        pre[i] = pre[i - 1] + x1[i];
    }
    
}
int main()
{
    op();
    
    return 0;
}