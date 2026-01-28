// Author: ayon6594
// Date: 2025-11-10
// Time: 21:01:25

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
    string s, p;
    cin >> s >> p;
    string ans = "";
    map<char, int> d;
    for (int i = 0; i < p.length(); i++)
    {
        d[p[i]]++;
    }
    for (int i = s.length(); i >=0; i--)
    {
        if(d[s[i]]>0){
            d[s[i]]--;
            ans = s[i] + ans;
        }
    }
    if(ans==p){
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