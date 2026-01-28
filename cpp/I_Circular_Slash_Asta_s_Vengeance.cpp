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
    string s;
    cin >> n >> s;
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            c++;
        }
    }

    if (c % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (c == 0)
    {
        cout << "YES" << endl;
        return;
    }

    bool p = false;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            int j = (i + 1) % n;
            if (s[j] != '1')
            {
                p = true;
                break;
            }
        }
    }

    if (c == 2)
    {
        bool a = false;
        for (int i = 0; i < n; ++i)
        {
            // debug(s[(i + 1) % n]);
            if (s[i] == '1' && s[(i + 1) % n] == '1')
            {
                a = true;
                break;
            }
        }
        if (a)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    else
    {
        if (p)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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