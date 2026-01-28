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
int mn = INT_MAX;
void kop(vector<int> &x, int i, int s1, int s2)
{
    if (i == x.size())
    {
        mn = min(mn, abs(s1 - s2));
        return;
    }
    kop(x, i + 1, s1 + x[i], s2);
    kop(x, i + 1, s1, s2 + x[i]);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
    }
    kop(x, 0, 0, 0);
    cout << mn << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}