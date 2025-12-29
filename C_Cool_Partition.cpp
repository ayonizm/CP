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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ct = 1;
    set<int> a1;
    set<int> a2;
    a1.insert(a[0]);
    for (int i = 1; i < n; i++)
    {
        a2.insert(a[i]);
        bool ok = true;
        for (auto x : a1)
        {
            if (a2.find(x) == a2.end())
            {
                // debug(x);
                ok = false;
                break;
            }
        }
        if (ok)
        {
            ct++;
            a1 = a2;
            a2.clear();
        }
    }
    cout << ct << endl;
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