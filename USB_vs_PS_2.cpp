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
    int a, b, c;
    cin >> a >> b >> c;
    int m;
    cin >> m;
    ll ans = 0;
    int cnt = 0;
    string x, y;
    vector<pair<int, string>> v(m);

    for (int i = 0; i < m; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(all(v));

    for (int i = 0; i < m; i++)
    {
        if (v[i].second == "USB" && a > 0)
        {
            ans += v[i].first;
            cnt++;
            a--;
        }
        else if (v[i].second == "PS/2" && b > 0)
        {
            ans += v[i].first;
            cnt++;
            b--;
        }
        else if (v[i].second == "USB" || v[i].second == "PS/2" && c > 0)
        {
            ans += v[i].first;
            cnt++;
            c--;
        }
    }

    cout << cnt << " " << ans << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}