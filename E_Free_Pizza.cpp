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
    vector<pair<int, int>> p;
    int ct = 1;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        p.pb({a, b});
    }
    pair<int, int> temp = {p[0].ff, p[0].ss};
    for (int i = 1; i < p.size(); i++)
    {
        if (p[i].ff == temp.ff && p[i].ss == temp.ss)
        {
            ct++;
            if (ct == 3)
            {
                cout << "Yes" << endl;
                return;
            }
        }
        else
        {
            ct = 1;
        }
        temp.ff = p[i].ff;
        temp.ss = p[i].ss;
    }
    cout << "No" << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}