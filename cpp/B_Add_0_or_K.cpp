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
    ll n, p;
    cin >> n >> p;
    vector<ll> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if(x[i]%2!=p%2){
            cout << x[i] + p << " ";
        }
        else{
            cout << x[i] << " ";
        }
    }
    // ll ay = x[0] % p;
    // for (int i = 0; i < n; i++)
    // {
    //     ll a = x[i] % p;
    //     if (a != ay)
    //     {
    //         ll pr = ay - a;
    //         // debug(pr);
    //         if(pr==0){
    //             cout << x[i] << " ";
    //         }
    //         else{
    //             cout << x[i] + (p-pr) << " ";
    //         }
    //     }
    // }
    // for (auto v : x)
    // {
    //     cout << v << " ";
    // }
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
