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
    int n, m, q;
    cin >> n >> m >> q;
    vector<set<int>> v(n);
    vector<int> a(n);
    while (q--)
    {
        int t, x, y;
        cin >> t >> x;
        x--;
        if (t == 1)
        {
            cin >> y;
            v[x].insert(y);
        }
        else if (t == 2)
        {
            a[x] = 1;
        }
        else
        {
            cin >> y;
            if (a[x] || v[x].find(y) != v[x].end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}