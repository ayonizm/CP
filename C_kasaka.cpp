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
bool isPal(string x)
{
    string p = x;
    reverse(p.begin(), p.end());
    return p==x;
}
void solve()
{
    string s;
    cin >> s;
    if (isPal(s))
    {
        cout << "Yes" << endl;
        return;
    }
    
    int fr = 0;
    int ba = 0;
    for (int i = 0;; i++)
    {
        if(s[i]=='a'){
            fr++;
        }
        else{
            break;
        }
    }
    for (int i = s.length()-1;; i--)
    {
        if(s[i]=='a'){

            ba++;
        }
        else{
            break;
        }
    }
    
    for (int i = 0; i < ba-fr; i++)
    {
        s = 'a' + s;
    }
    if(isPal(s)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
}
int main()
{
    op();
    solve();
    return 0;
}