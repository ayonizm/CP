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
    // cin >> k;
    for (int i = 0; i < s.length(); i++)
    {
        k += s[i];
        if(k.length()>=2){
            if(k[k.length()-1]=='('&&k[k.length()-2]==')'){
                k.pop_back();
                k.pop_back();
            }
        }
    }
    cout << k << endl;
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}