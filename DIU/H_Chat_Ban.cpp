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
    ll po;
    if(a*a<=b){
        cout << 2 * a - 1 << endl;
    }
    else{
        ll lo = 0;
        ll hi = 2 * a;
        ll mid;
        while (lo+1<hi)
        {
            mid = (lo + hi) / 2;
            if(mid<=a){
                po = (mid * (mid + 1)) / 2;
            }
            else{
                po = a * a;
                po -= ((2 * a - mid - 1) * (2 * a - mid)) / 2;
            }
            if(b<=po){
                hi = mid;
            }
            else{
                lo = mid;
            }
        }
        cout << lo + 1 << endl;
    }
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}