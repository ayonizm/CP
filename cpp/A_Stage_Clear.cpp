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
    vector<string> x;
    string s;
    cin >> s;
    // for (int i = 1; i <=4; i++)
    // {
    //     for (int i = 1; i <=8; i++)
    //     {
    //         string p = "";
    //         char a = i + '0';
    //         char b = j + '0';
    //         char c ='-';
    //         p += a;
    //         p += c;
    //         p += b;
    //         x.pb(s);
    //     }
    // }
    // for (int i = 0; i < x.size(); i++)
    // {
    //     if(s==x[i]){
    //         cout << x[i + 1] << endl;
    //         return;
    //     }
    // }
    int r = s[0] - '0';
    if(s[2]=='8'){
        cout << r+1 << "-" << 1 << endl;
    }
    else{
        cout << r << "-" << s[2] - '0' + 1 << endl;
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