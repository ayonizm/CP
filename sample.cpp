// Author: ayon6594
// Date: 2025-11-14
// Time: 14:45:46

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
int ct = 1;
void solve()
{
    cout << "Case " << ct++ << ": ";
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b+c<6||a+b+c>9){
        cout << "invalidum" << endl;
        return;
    }
    
}
int main()
{
    op();
    test(t){
        solve();
    }

    return 0;
}