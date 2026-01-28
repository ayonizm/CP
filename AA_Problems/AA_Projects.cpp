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
    int n;
    cin >> n;

    vector<int> s(n), e(n), r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> e[i] >> r[i];
    }

    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);

    sort(idx.begin(), idx.end(), [&](int i, int j)
         { return e[i] < e[j]; });

    int t = 0, l = 0;

    for (int i = 0; i < n; i++)
    {
        int j = idx[i];
        if (s[j] >= l)
        {
            t += r[j];
            l = e[j];
        }
    }

    cout << t << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}