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
const int N = 2e5 + 10;
ll rr[N];
int a[N], t, n, q, x;

int main()
{
    op();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        memset(rr, 0, sizeof rr);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            rr[i] = rr[i - 1] + a[i];
            a[i] = max(a[i - 1], a[i]);
        }
        while (q--)
        {
            cin >> x;
            int step = upper_bound(a + 1, a + n + 1, x) - 1 - a;
            cout << rr[step] << ' ';
        }
        cout << '\n';
    }
}