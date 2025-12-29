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
const int H = 300007;
vector<ll> x(H, 0);
vector<ll> ovai(H, 0);
ll div(int k)
{
    int ct = 0;
    while (k!=0)
    {
        k /= 3;
        ct++;
    }
    return ct;
}
void ok()
{
    for (int i = 1; i < H+10; i++)
    {
        x[i] = div(i);
        // debug(x[i]);
        ovai[i] = ovai[i - 1] + x[i];
    }
}
void solve()
{
    int a, b;
    cin >> a >> b;
    // for(auto v:ovai){
    //     cout << v << "--";
    // }
    // cout << endl;
    cout << ovai[b] - ovai[a - 1]+x[a] << endl;
}

int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ok();
    test(t)
    {
        solve();
    }
    return 0;
}