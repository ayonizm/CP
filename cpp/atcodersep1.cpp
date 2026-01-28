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
    if (a % b == 0)
    {
        cout << a;
        for (int i = 0; i < c; i++)
        {
            cout << 0;
        }
        cout << endl;
        return;
    }
    else
    {
        string s1 = to_string(a);
        int r;
        int ok = 0;
        for (char i = '0'; i <= '9'; i++)
        {
            s1 += i;
            r = stoi(s1);
            // debug(s1);
            s1.pop_back();
            if (r % b == 0)
            {
                ok = 1;
                break;
            }
        }
        if (ok == 0)
        {
            cout << -1 << endl;
            return;
        }
        cout << r;
        for (int i = 0; i < c - 1; i++)
        {
            cout << 0;
        }
        cout << endl;
    }
}
int main()
{
    op();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // test(t){
    solve();
    // }
    return 0;
}