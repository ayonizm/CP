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
int main()
{
    op();
    // test(t){
    ll a, b;
    cin >> a >> b;
    int c = 10;
    vector<ll> x(20);
    x[0]=a;
    x[1]=b;
    for (ll i = 2; i < 13; i++)
    {
        ll r=x[i-2]+x[i-1];
        string p = to_string(r);
        if(p.length()>1){
            reverse(all(p));
            ll k = stoll(p);
            x[i] = k;
        }
        else{
            x[i] = r;
        }
    }

    cout << x[9] << endl;
    return 0;
}