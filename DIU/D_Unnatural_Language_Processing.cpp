//************************************************************
//  █████  ██    ██   ██████   ███    ██ |
// ██   ██ ██    ██  ██    ██  ████   ██ |
// ███████   ████    ██    ██  ██ ██  ██ |
// ██   ██    ██     ██    ██  ██  ██ ██ |
// ██   ██    ██      ██████   ██   ████ |
// ************************************************************/
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
bool is_con(char x)
{
    if (x == 'b' || x == 'c' || x == 'd')
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;

    cout << s[0];
    for (int i = 1; i < n; i++)
    {
        if (is_con(s[i]))
        {
            if (s[i + 1] == 'a' || s[i + 1] == 'e')
            {
                cout << "." << s[i];
            }
            else
            {
                cout << s[i];
            }
        }
        else
        {
            cout << s[i];
        }
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