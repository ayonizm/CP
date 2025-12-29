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
    string k;
    cin >> k;
    map<char, int> x;
    for (int i = 0; i < k.length(); i++)
    {
        x[k[i]]++;
    }
    int ok = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (isupper(s[i]) && x[s[i - 1]] == 0)
        {
            ok = false;
        }
    }
    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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