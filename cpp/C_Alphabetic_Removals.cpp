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
    int c;
    cin >> c;
    string s;
    cin >> s;
    map<char, int> x;
    for (int i = 0; i < n; i++)
    {
        x[s[i]]++;
    }
    char f = 'a';
    string p = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> ay;
    for (int i = 0; i < p.length(); i++)
    {
        int r = c - x[p[i]];
        if (r < 0)
        {
            ay[p[i]] = c;
            break;
        }
        if (r == 0)
        {
            ay[p[i]] = c;
            break;
        }
        if (r > 0)
        {
            ay[p[i]] = x[p[i]];
            c -= x[p[i]];
        }
    }
    // for (auto v : ay)
    // {
    //     cout << v.ff << " " << v.ss << endl;
    // }
    
    for (int i = 0; i < n; i++)
    {
        if (ay[s[i]] > 0)
        {
            // debug(s[i]);
            ay[s[i]]--;
            // debug(ay[s[i]]);
        }
        else
        {
            cout << s[i];
        }
    }

    cout << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}