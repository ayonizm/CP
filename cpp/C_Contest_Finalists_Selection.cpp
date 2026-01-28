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
    int n, m;
    cin >> n;
    cin >> m;
    vector<pair<int, int>> x;
    vector<ll> temp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a ;
        temp.pb(a);
    }
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b ;
        x.pb({temp[i], -b});
    }

    sort(all(x), greater<pair<int, int>>());
    for (int i = 0; i < m; i++)
    {
        cout << x[i].ss * -1 << endl;
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