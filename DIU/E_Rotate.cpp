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

int main()
{
    op();
    int n;
    cin >> n;
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            ar[i][j] = s[j] - '0';
        }
    }
    int c1 = ar[0][0];

    for (int i = 0; i < n - 1; i++)
    {
        ar[i][0] = ar[i + 1][0];
    }
    for (int i = 0; i < n - 1; i++)
    {
        ar[n - 1][i] = ar[n - 1][i + 1];
    }
    for (int i = n - 1; i > 0; i--)
    {
        ar[i][n - 1] = ar[i - 1][n - 1];
    }
    for (int i = n - 1; i > 0; i--)
    {
        ar[0][i] = ar[0][i - 1];
    }
    ar[0][1] = c1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ar[i][j];
        }
        cout << endl;
    }

    return 0;
}