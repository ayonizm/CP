// Author: ayon6594
// Date: 2025-11-14
// Time: 21:06:53

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
    string a = "**";
    string b = "*<";
    // string c = "*>";
    string d = ">*";
    // string e = ">*<";
    string f = "><";
    string s;
    cin >> s;
    // int r1 = s.find(a);
    // int r2 = s.find(b);
    // int r3 = s.find(c);
    // int r4 = s.find(d);
    // int r5 = s.find(e);
    // int r6 = s.find(f);
    // if (r1 < 0 || r2 < 0 || r3 < 0 || r4 < 0 || r5 < 0 || r6 < 0)
    // {
    //     cout << -1 << endl;
    //     return;
    // }
    for (int i = 0; i < s.length(); i++)
    {
        if (i + 1 < s.length())
        {
            string k = s.substr(i, 2);
            // debug(k);
            if (k == a || k == b|| k == d|| k == f)
            {
                cout << -1 << endl;
                return;
            }
        }
    }

    int ay = 0;
    for (int i = 0; i < s.length() && s[i] != '>'; i++)
    {
        ay++;
    }
    int ct = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '<')
        {
            break;
        }
        else
        {
            ct++;
        }
    }
    cout << max(ct, ay) << endl;
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