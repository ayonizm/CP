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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> x;
    for (int i = 0; i < s.length(); i++)
    {
        x[s[i]]++;
        // debug(s[i]);
    }
    if (x['B'] == k)
    {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    for (int i = 0; i < n; i++)
    {
        bool ok = 0;
        if (x['B'] < k)
        {
            if (s[i] != 'B')
            {
                x['B']++;
            }
            ok = true;
            if (x['B'] == k)
            {
                if (ok)
                {
                    cout << i + 1 << " B" << endl;
                }
                else
                {
                    cout << i + 1 << " A" endl;
                }
                return;
            }
        }
        if (x['B'] > k)
        {
            if (s[i] == 'B')
            {
                x['B']--;
            }
            ok = false;
            // debug(x['B']);
            if (x['B'] == k)
            {
                if (ok)
                {
                    cout << i + 1 << " B" << endl;
                }
                else
                {
                    cout << i + 1 << " A" endl;
                }
                return;
            }
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