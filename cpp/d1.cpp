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
    int a, b;
    cin >> a >> b;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int mr = n - b;
    int r = x[a - 1];
    sort(all(x));
    if (b == 1 && x[n - 1] == r)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] == r)
        {
            x[i] = -1;
            break;
        }
    }
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == -1)
        {
            idx = i;
            break;
        }
        else
        {
            mr--;
            if (mr == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    int kp = n - 1 - idx;
    if (kp > mr)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    test(t)
    {
        solve();
    }
    return 0;
}
