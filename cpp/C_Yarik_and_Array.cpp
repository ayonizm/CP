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
    int n;
    cin >> n;
    vector<ll> x;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        // if(t<0){
        //     t=t*-1;
        // }
        x.pb(t);
    }
    ll m = x[0];
    ll st = x[0];
    for (int i = 1; i < n; i++)
    {
        int p1 = abs(x[i - 1]);
        int p2 = abs(x[i]);
        if ((p1 % 2==0) == (p2 % 2==0))
        {
            st = x[i];
            // debug(st);
        }
        else
        {
            if(st>0){
                st += x[i];
            }
            else{
                st = x[i];
            }
            // debug(st);
        }
        m = max(m, st);
    }
    cout << m << endl;
}
int main()
{
    op();
    test(t){
    solve();
    }
    return 0;
}
