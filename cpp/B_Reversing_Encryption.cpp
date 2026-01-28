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
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << s << endl;
        return;
    }
    vector<int> div;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            div.pb(i);
            if (i * i != n)
            {
                div.pb(n / i);
            }
        }
    }
    sort(all(div));
    for (auto d : div)
    {
        reverse(s.begin(), s.begin() + d);
    }
    cout << s << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}