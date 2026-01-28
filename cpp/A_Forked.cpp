// Author: ayon6594
// Date: 2025-11-01
// Time: 20:00:45

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
#define pb insert
#define mp make_pair
#define ff first
#define ss second
#define all(vec) vec.begin(), vec.end()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
void solve()
{
    int a, b;
    cin >> a >> b;
    int kx, ky;
    cin >> kx >> ky;
    int qx, qy;
    cin >> qx >> qy;
    set<pair<int, int>> t1;
    set<pair<int, int>> t2;
    t1.pb({kx + a, ky + b});
    t1.pb({kx - a, ky + b});
    t1.pb({kx + a, ky - b});
    t1.pb({kx - a, ky - b});
    t1.pb({kx + b, ky + a});
    t1.pb({kx - b, ky + a});
    t1.pb({kx + b, ky - a});
    t1.pb({kx - b, ky - a});

    t2.pb({qx + a, qy + b});
    t2.pb({qx - a, qy + b});
    t2.pb({qx + a, qy - b});
    t2.pb({qx - a, qy - b});
    t2.pb({qx + b, qy + a});
    t2.pb({qx - b, qy + a});
    t2.pb({qx + b, qy - a});
    t2.pb({qx - b, qy - a});
    ll ct = 0;
    for(auto v:t1){
        if(t2.count(v)){
            ct++;
        }
    }
    cout << ct << endl;
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