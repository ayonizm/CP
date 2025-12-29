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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> p1;
    vector<int> p2;
    vector<int> p3;
    vector<int> p4;

    for (int i = 0; i < n * 2; i++)
    {
        if (s[i] == 'A')
        {
            p1.pb(i + 1);
        }
        else
        {
            p2.pb(i);
        }
    }
    for (int i = 0; i < n * 2; i++)
    {
        if (s[i] == 'B')
        {
            p3.pb(i + 1);
        }
        else
        {
            p4.pb(i);
        }
    }

    ll sum1 = 0;
    ll sum2 = 0;
    for (int i = 0; i < p1.size(); i++)
    {
        sum1 += (abs((p1[i]) - p2[i]));
        // debug(p1[i]);
        // debug(p2[i]);
        // debug(sum);
    }
    for (int i = 0; i < p3.size(); i++)
    {
        sum2 += (abs((p3[i]) - p4[i]));
        // debug(p1[i]);
        // debug(p2[i]);
        // debug(sum);
    }
    cout << min(sum1 / 2, sum2 / 2) << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}