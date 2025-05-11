//************************************************************
//  █████  ██    ██   ██████   ███    ██ |
// ██   ██ ██    ██  ██    ██  ████   ██ |
// ███████   ████    ██    ██  ██ ██  ██ |
// ██   ██    ██     ██    ██  ██  ██ ██ |
// ██   ██    ██      ██████   ██   ████ |
// ************************************************************/
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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(all(v));
    int res = 0;
    int i;

    for (i = n - 1; i >= 0 && v[i] == 4; i--)
    {
        res++;
    }

    int j = 0;
    for (; i >= 0 && v[i] == 3; i--)
    {
        res++;
        if (v[j] == 1)
        {
            j++;
        }
    }

    int s = 0;
    for (; i >= j; i--)
    {
        s += v[i];
    }

    res += s / 4 + (s % 4 != 0);
    cout << res << endl;
}
int main()
{
    op();
    solve();
    return 0;
}