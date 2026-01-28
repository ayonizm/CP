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
    string s;
    cin >> s;
    int i = 0, c = 0, c1 = 0, l = s.length();
    for (i = 0; i < l; i++)
    {
        if (s[i] == '1'){
            c++;
        }
    }
    for (i = 0; i < l; i++)
    {
        if (s[i] == '1')
        {
            c1++;
            if (s[i + 1] == '0')
            {
                break;
            }
        }
    }
    if (c != 0 && c == c1)
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
    test(t)
    {
        solve();
    }
    return 0;
}