// Author: ayon6594
// Date: 2025-11-16
// Time: 12:04:53

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
    vector<int> a;
    int x, y, z;
    cin >> x >> y >> z;
    a.pb(x);
    a.pb(y);
    a.pb(z);
    sort(all(a));
    if(abs(a[0]-a[2])>=10){
        cout << "check again" << endl;
    }
    else{
        cout << "final " << a[1] << endl;
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