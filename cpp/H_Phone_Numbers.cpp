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
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n<11){
        cout << 0 << endl;
        return;
    }
    else{
        map<char, int> x;
        for (int i = 0; i < s.length(); i++)
        {
            x[s[i]]++;
        }
        int k1 = n / 11;
        if(x['8']>0){
            int p1 = x['8'];
            cout << min(p1,k1) << endl;
            return;
        }
    }
    cout << 0 << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}