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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int c = 0;
    for (auto x : s)
    {
        if (x == '1')
        {
            c++;
        }
        else
        {
            c = 0;
        }
        if (c >= k)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    vector<int> p1, p2;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            p1.pb(i);
        }
        else
        {
            p2.pb(i);
        }
    }
    vector<int> p(n);
    for (int i = 0; i < p1.size(); i++)
    {
        p[p1[i]] = i + 1;
        // debug(p[i]);
    }
    for (int i = 0; i < p2.size(); i++)
    {
        p[p2[i]] = p1.size() + i + 1;
        // debug(p[p1.size() + i]);
    }
    for (auto v : p)
    {
        cout << v << " ";
    }
    cout << endl;
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