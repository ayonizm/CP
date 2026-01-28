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
vector<string> r(vector<string> &g)
{
    int n = g.size();
    vector<string> x(n, string(n, '.'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x[j][n - 1 - i] = g[i][j];
        }
    }
    return x;
}

int d(vector<string> &a, vector<string> &b)
{
    int n = a.size();
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                c++;
            }
        }
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    int m = n * n;
    for (int i = 0; i < 4; i++)
    {
        m = min(m, d(s, t));
        s = r(s);
    }
    cout << m << endl;
    return 0;
}