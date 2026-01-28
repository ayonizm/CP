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
    vector<int> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int h;
        cin >> h;
        int x = lower_bound(s.begin(), s.end(), h) - s.begin();
        int p = -1;
        if (x > 0 && s[x - 1] < h)
        {
            p = s[x - 1];
        }
        int y = upper_bound(s.begin(), s.end(), h) - s.begin();
        int t = -1;
        if (y < n && s[y] > h)
        {
            t = s[y];
        }
        if (p == -1)
        {
            cout << "X";
        }
        else
        {
            cout << p;
        }
        cout << " ";
        if (t == -1)
        {
            cout << "X";
        }
        else
        {
            cout << t;
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