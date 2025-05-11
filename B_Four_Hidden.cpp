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
    string t, u;
    cin >> t >> u;
    bool f = false;
    for (int i = 0; i <= t.size() - u.size(); i++)
    {
        bool g = true;
        for (int j = 0; j < u.size(); j++)
        {
            if (!(t[i + j] == '?' || t[i + j] == u[j]))
            {
                g = false;
            }
        }
        if (g)
        {
            f = true;
        }
    }
    if (f)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
