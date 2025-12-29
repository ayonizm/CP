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
    sort(all(s), greater<char>());
    
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] != 'z')
        {
            s[i+1]++;
            s.erase(s.begin()+i);
            i-=2;
            if(i<0){
                i = -1;
            }
        }
        // debug(s);
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