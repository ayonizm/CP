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
void solve()
{
    ll a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    if (b1 == 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (a1 % b1 == 0)
    {
        ll k = a1 / b1;
        if (a2 == k * b2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}