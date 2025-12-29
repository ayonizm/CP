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
    string s;
    cin >> s;
    double m = 0.0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string t = s.substr(i, j - i + 1);
            int l = t.length();
            if (l >= 3 && t[0] == 't' && t[l - 1] == 't')
            {
                int c = 0;
                for (char a : t)
                {
                    if (a == 't')
                    {
                        c++;
                    }
                }
                double r = (double)(c - 2) / (double)(l - 2);
                m = max(m, r);
            }
        }
    }
    cout << fixed << setprecision(17) << m << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}