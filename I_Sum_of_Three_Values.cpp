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

    sort(v.begin(), v.end());

    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            int s = v[i].first + v[l].first + v[r].first;
            // debug(s);
            if (s == p)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << endl;
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