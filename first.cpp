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
// cout << "Case " << ct << ": ";
// int ct = 1;
void solve()
{
    string s;
    cin >> s;
    // cout << s;
    ll ct = 0;
    char l = '\\';
    // debug(l);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==l&&i+1<s.length()&&s[i+1]=='0'){
            break;
        }
        ct++;
    }
    int r = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == l && i + 1 < s.length() && s[i + 1] == '0')
        {
            r++;
            i++;
        }
        else{
            r++;
        }
    }
    
    cout << r+1 << " " << ct << endl;
}
int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}