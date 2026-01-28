// Author: ayon6594
// Date: 2025-11-08
// Time: 08:40:31

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
    double a, b;
    cin >> a >> b;
    b = b / 100.0;
    double t = a * b;
    int r = t;
    double f = r;
    if(t-f==0.0){
        cout << r << endl;
    }
    else{
        printf("%lf\n", a * b);
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