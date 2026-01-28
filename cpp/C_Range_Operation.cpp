// Author: ayon6594
// Date: 2025-11-14
// Time: 21:28:35

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
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
    }
    vector<int> pr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pr[i] = pr[i - 1] + x[i - 1];
    }
    // pr.erase(pr.begin());
    // cout << endl;
    // cout << "-----------------\n";
    // for(auto v:pr){
    //     cout << v << " ";
    // }
    // cout << "\n------------" << endl;
    ll sm = pr[n];
    ll notun = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= i; l++)
        {
            ll kk = (ll)(i - l + 1) * (ll)(l + i);
            ll ay = pr[i] - pr[l - 1];
            ll c = kk - ay;
            notun = max(notun, c);
        }
    }
    cout << sm + notun << endl;
}
int main()
{
    op();
    test(t){
    solve();
    }
    return 0;
}