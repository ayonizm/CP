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
    double sum = 0;
    while (n--)
    {
        double a, b;
        cin >> a >> b;
        if(b==0.0){
            sum += a;
            continue;
        }
        double k = a-((a*b)/100);
        sum += k;
    }

    ll kr = sum;
    double pr = kr;
    if(abs(sum-pr)!=0.0){
        kr++;
    }
    ll c;
    cin >> c;
    if(c==0){
        cout << 0 << endl;
        return;
    }
    ll mn = c - kr;
    // debug(ay);
    vector<ll> coin = {64, 32, 16, 8, 4, 2, 1};
    ll ct = 0;
    for(auto v:coin){
        if (v <= mn)
        {
            ll rp = mn / v;
            mn -= (rp * v);
            ct += rp;
        }
    }
    
    cout << ct << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}