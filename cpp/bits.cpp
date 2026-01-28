// Author: ayon6594
// Date: 2025-10-19
// Time: 20:43:58

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
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int idx = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            idx = i;
            break;
        }
    }
    ll ct = 0;
    if (idx != -1)
    {
        int k = 1;
        ct = idx;
        for (int i = idx + 1; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                ll rp = i - ct;
                ct = i;
                if (rp >= b)
                {
                    k++;
                }
            }
        }
        cout << k << endl;
    }
    else
    {
        cout << "0" << endl;
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