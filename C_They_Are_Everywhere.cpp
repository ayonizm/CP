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
    string s;
    cin >> n >> s;

    unordered_set<char> u(all(s));
    int t = u.size();

    unordered_map<char, int> m;
    int l = 0, r = 0, c = 0, ans = INT_MAX;

    while (r < n)
    {
        if (++m[s[r]] == 1)
            c++;

        while (c == t)
        {
            ans = min(ans, r - l + 1);
            if (--m[s[l]] == 0)
                c--;
            l++;
        }

        r++;
    }

    cout << ans << endl;
}

int main()
{
    op();
    // test(t) {
    solve();
    // }
    return 0;
}
