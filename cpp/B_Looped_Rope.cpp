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
bool ay(char ar[][1005], int i, int j, int a, int b)
{
    int ct = 0;
    if (i - 1 >= 0 && ar[i - 1][j] == '#')
    {
        ct++;
    }
    if (i + 1 < a && ar[i + 1][j] == '#')
    {
        ct++;
    }
    if (j - 1 >= 0 && ar[i][j - 1] == '#')
    {
        ct++;
    }
    if (j + 1 < b && ar[i][j + 1] == '#')
    {
        ct++;
    }
    if (ct == 2 || ct == 4)
    {
        return true;
    }
    return false;
}
void solve()
{
    int a, b;
    cin >> a >> b;
    char ar[1005][1005];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (ar[i][j] == '#')
            {
                if (!ay(ar, i, j, a, b))
                {
                    cout << "No" << endl;
                    return;
                }
            }
        }
    }
    cout << "Yes" << endl;
}
int main()
{
    op();
    solve();
    return 0;
}
