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
        vector<ll> x;
        ll p = 10;
        while (1)
        {
            if (p > n){
                break;
            }
            ll ay = 1 + p;
            if (n % ay == 0)
            {
                // debug(n / ay);
                x.push_back(n / ay);
            }
            if (p > n){
                break;
            }
            p *= 10;
        }

        if (x.empty())
        {
            cout << 0;
        }
        else
        {
            sort(all(x));
            cout << x.size()<<endl;
            for (auto x : x)
            {
                cout << x<<" ";
            }
        }
        cout << endl;
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}