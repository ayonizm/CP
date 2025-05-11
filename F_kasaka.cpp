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
    k = s;
    reverse(all(k));
    if(s==k){
        cout << "Yes" << endl;
        return;
    }
    else if(s[s.length()-1]=='a'){
        int ct = 0;
        for (int i = s.length()-1; i>=0; i--)
        {
            if(s[i]=='a'){
                ct++;
            }
            else{
                break;
            }
        }
        for (int i = 0; i < ct; i++)
        {
            
            s = 'a' + s;
        }
        
        
        string f = s;
        reverse(all(f));
        if(s==f){
            cout << "Yes" << endl;
            return;
        }
        else{
            cout << "No" << endl;
            return;
        }
    }
    cout << "No" << endl;
}
int main()
{
    op();
    solve();
    return 0;
}