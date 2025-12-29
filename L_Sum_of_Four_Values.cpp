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
    int n, p;
    cin >> n >> p;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v[i] = {k, i + 1};
    }

    sort(all(v));

    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int l = j + 1, r = n - 1;
            while (l < r)
            {
                int s = v[i].ff + v[j].ff + v[l].ff + v[r].ff;
                if (s == p)
                {
                    cout << v[i].ss << " " << v[j].ss << " " << v[l].ss << " " << v[r].ss << endl;
                    return;
                }
                if (s < p)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}