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
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    int x = a[0];
    int y = x;

    if (y > s / 2)
    {
        cout << 1 << endl;
        cout << 1 << " ";
        return;
    }

    set<int> b;
    for (int i = 1; i < n; i++)
    {
        if (a[i] * 2 <= x)
        {
            b.insert(i + 1);
        }
    }

    int t = x;
    for (int i : b)
    {
        t += a[i - 1];
    }

    if (t > s / 2)
    {
        cout << b.size() + 1 << endl;
        cout << 1 << " ";
        for (int i : b)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << 0 << endl;
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