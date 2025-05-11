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
    stack<char> x;
    string s;
    cin >> s;
    bool r = true;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==')'||s[i]=='}'||s[i]==']'){
            char a = x.top();
            if (s[i] == ')' && a != '(' || s[i] == '}' && a != '{'||s[i]==']'&&a!='[')
            {
                r = false;
                break;
            }
            else{
                x.pop();
            }
        }
        else{
            x.push(s[i]);
        }
    }
    if(r){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}