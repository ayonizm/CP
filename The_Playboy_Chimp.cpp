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
const int N = 32000;
int a[N];
int f(int k, int n)
{
    return lower_bound(a, a + n, k) - a;
}
int g(int k, int n)
{
    return upper_bound(a, a + n, k) - a;
}
void solve()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        v.pb(h);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int h;
        cin >> h;
        int k = lower_bound(v.begin(), v.end(), h) - v.begin();
        if (k != n)
        {
            cout << k << " ";
        }
        else
        {
            cout << "X ";
        }
        k = upper_bound(v.begin(), v.end(), h) - v.begin();
        if (k != n)
        {
            cout << k << endl;
        }
        else
        {
            cout << "X" << endl;
        }
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