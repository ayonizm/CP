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
    vector<ll> x(a);
    vector<ll> y(b);
    for (ll i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    for (ll i = 0; i < b; i++)
    {
        cin >> y[i];
    }
    ll i = 0;
    ll j = 0;

    vector<ll> c;
    
    while (i<a||j<b)
    {
        if(j==b||(i<a&&x[i]<y[j])){
            i++;
            
        }
        else{
            c.push_back(i);
            j++;
        }
    }
    for (auto v : c)
    {
        cout << v << " ";
    }
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}