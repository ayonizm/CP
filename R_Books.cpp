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
    int n, t;
    while (cin >> n >> t)
    {
        vector<int> bk(n + 1);
        vector<int> sum(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> bk[i];
            sum[i] = sum[i - 1] + bk[i];
        }
        int mx = 1;
        int l = 1;
        for (int i = 1; i <= n; i++)
        {
            while (sum[i] - sum[l] > t)
            {
                l++;
            }
            mx = max(mx, i - l);
        }
        cout << mx << endl;
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