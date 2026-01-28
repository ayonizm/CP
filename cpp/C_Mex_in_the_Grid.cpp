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
const int N = 1e3;
int arr[N][N];

void solve()
{
    int n;
    cin >> n;

    int up = 0;
    int dwn = n - 1;
    int lft = 0;
    int rgt = n - 1;
    int oi = 0;

    while (up <= dwn && lft <= rgt)
    {
        for (int i = lft; i <= rgt; i++)
        {
            arr[up][i] = oi++;
        }
        up++;

        for (int i = up; i <= dwn; i++)
        {
            arr[i][rgt] = oi++;
        }
        rgt--;

        if (up <= dwn)
        {
            for (int i = rgt; i >= lft; i--)
            {
                arr[dwn][i] = oi++;
            }
            dwn--;
        }

        if (lft <= rgt)
        {
            for (int i = dwn; i >= up; i--)
            {
                arr[i][lft] = oi++;
            }
            lft++;
        }
    }

    int mx = n * n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = mx - arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] - 1 << " ";
        }
        cout << endl;
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