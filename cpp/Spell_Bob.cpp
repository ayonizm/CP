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
    string s1, s2;
    cin >> s1 >> s2;
    int o = 0;
    int b = 0;
    vector<pair<char, char>> x;
    for (int i = 0; i < 3; i++)
    {
        x.pb({s1[i], s2[i]});
    }
    int flag = 0;
    int ct = 0;

    if (x[0].first == 'b' || x[0].second == 'b')
    {
        ct++;
    }
    if (x[1].first == 'o' || x[1].second == 'o')
    {
        ct++;
    }
    if (x[2].first == 'b' || x[2].second == 'b')
    {
        ct++;
    }

    if (ct == 3)
    {
        cout << "yes" << endl;
        return;
    }
    ct = 0;

    if (x[0].first == 'b' || x[0].second == 'b')
    {
        ct++;
    }
    if (x[1].first == 'b' || x[1].second == 'b')
    {
        ct++;
    }
    if (x[2].first == 'o' || x[2].second == 'o')
    {
        ct++;
    }

    if (ct == 3)
    {
        cout << "yes" << endl;
        return;
    }
    ct = 0;

    if (x[0].first == 'o' || x[0].second == 'o')
    {
        ct++;
    }
    if (x[1].first == 'b' || x[1].second == 'b')
    {
        ct++;
    }
    if (x[2].first == 'b' || x[2].second == 'b')
    {
        ct++;
    }

    if (ct == 3)
    {
        cout << "yes" << endl;
        return;
    }
    cout << "no" << endl;
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}