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
    ll k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll tt = accumulate(all(arr), 0LL);
    int mn = *min_element(all(arr));
    int mx = *max_element(all(arr));
    int ay = count(all(arr), mx);

    if (mx - mn > k + 1 || (mx - mn == k + 1 && ay > 1))
    {
        cout << "Jerry" << endl;
    }
    else
    {
        if (tt % 2!=0)
        {
            cout << "Tom" << endl;
        }
        else
        {
            cout << "Jerry" << endl;
        }
    }
}
int main()
{
    op();
    test(t)
    {
        solve();
    }
    return 0;
}