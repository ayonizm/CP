// Author: ayon6594
// Date: 2025-10-16
// Time: 02:57:38

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
    ll a;
    cin >> a;
    vector<int> x;
    for (int i = 0; i < a; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
    }
    ll k = accumulate(all(x),0);
    cout << k - a + 1 << endl;
    // while (x.size() > 1)
    // {
    //     ll kp = x[0] + x[1] - 1;
    //     x.erase(x.begin());
    //     x.erase(x.begin());
    //     x.pb(kp);
    //     if (x.size() == 1){
    //         break;
    //     }
    //     ll ay = x[x.size() - 1] + x[x.size() - 2] - 1;
    //     x.pop_back();
    //     x.pop_back();
    //     x.insert(x.begin(), ay);
    // }
    // cout << x[0] << endl;
    // for(auto v:x){
    //     cout << v << " ";
    // }

}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test(t){
    solve();
    }
    return 0;
}