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
const int MAX = 1e6 + 9;
int ar[MAX];
void pnd()
{
    for (int i = 1; i <= MAX; i++)
    {
        for (int j = i; j <= MAX; j += i)
        {
            ar[j]++;
        }
    }
}
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int p = 1; p <= k; p++)
            {
                ll r = ((((i % 1073741824) * (j % 1073741824)) % 1073741824) * (p % 1073741824)) % 1073741824;
                // cout << i << " " <<j << " " << p << endl;
                // debug(r);
                sum += ar[r];
            }
            
        }
        
    }
    cout << sum << endl;
}
int main()
{
    op();
    pnd();
    // test(t){
        solve();
    // }
    return 0;
}