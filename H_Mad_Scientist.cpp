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
    string a, b;
    cin >> a >> b;
    
    int res = 0;
    int l = 0, r = 0;
    
    while (r < n && l <= r)
    {
        if (a[r] != b[r])
        {
            r++;
        }
        else
        {
            if (r != 0 && a[r - 1] != b[r - 1])
            {
                res++;
            }
            r++;
            l = r;
        }
    }
    
    cout << res << endl;
}
int main()
{
    op();
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    // test(t){
        solve();
    // }
    return 0;
}