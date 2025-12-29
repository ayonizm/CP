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
    vector<vector<int>> v(3, vector<int>(3));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int tmp = v[i][j];
            if (i - 1 >= 0)
                tmp += v[i - 1][j];
            if (j - 1 >= 0)
                tmp += v[i][j - 1];
            if (i + 1 < 3)
                tmp += v[i + 1][j];
            if (j + 1 < 3)
                tmp += v[i][j + 1];
            if (tmp % 2 == 0)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
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