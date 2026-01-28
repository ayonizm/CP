#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
const int mx = 1000000;
const int mn = 10;
vector<int> cf(mx + 1, 0);
vector<vector<int>> p(mn + 1, vector<int>(mx + 1, 0));
void pre()
{
    for (int i = 2; i <= mx; ++i)
    {
        if (cf[i] == 0)
        {
            for (int j = i; j <= mx; j += i)
            {
                cf[j]++;
            }
        }
    }
    for (int n = 0; n <= mn; ++n)
    {
        for (int i = 1; i <= mx; ++i)
        {
            if (cf[i] == n)
            {
                p[n][i] = p[n][i - 1] + 1;
            }
            else
            {
                p[n][i] = p[n][i - 1];
            }
        }
    }
}
int q(int a, int b, int n)
{
    if (a > 1)
    {
        return p[n][b] - p[n][a - 1];
    }
    else
    {
        return p[n][b];
    }
}
int main()
{
    op();
    pre();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        cout << q(a, b, n) << "\n";
    }

    return 0;
}
