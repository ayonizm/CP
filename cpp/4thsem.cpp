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
    int ct = 0;
    int n;
    cin >> n;
    map<int, int> x;
    vector<int> p;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        p.pb(t);
        if (t == -1)
        {
            ct++;
            continue;
        }
        x[t]++;
    }
    if (x.size() != n - ct)
    {
        cout << "No" << endl;
        return;
    }
    else
    {
        cout << "Yes" << endl;
        int j = 0;
        while (j < n)
        {
            if (p[j] != -1)
            {
                cout << p[j] << " ";
            }
            else
            {
                int tp = 1;
                while (tp <= n)
                {
                    if (x[tp] == 0)
                    {
                        x[tp]++;
                        break;
                    }
                    tp++;
                }
                cout << tp << " ";
            }
            j++;
        }
    }
}

int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // test(t)
    // {
    solve();
    // }
    return 0;
}