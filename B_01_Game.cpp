// Author: ayon6594
// Date: 2025-11-06
// Time: 17:14:31

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
    string f = "01";
    int r = s.find(f);
    int ct = 0;
    while (r >= 0)
    {
        ct++;
        s.erase(s.begin() + r, s.begin() + r + 2);
        r = s.find(f);
    }
    if(ct%2==0){
        cout << "NET" << endl;
    }
    else{
        cout << "DA" << endl;
    }
    // cout << ct << endl;
}
int main()
{
    op();
    test(t)
    {
        solve();
    }
    return 0;
}