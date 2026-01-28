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
    string s1;
    cin >> s1;
    int m;
    cin >> m;
    string s2;
    cin >> s2;
    string k;
    cin >> k;
    // string p = "";
    for (int i = 0; i < m; i++)
    {
        if (k[i] == 'V'){
            s1 = s2[i] + s1;
        }
        else{
            s1 += s2[i];
        }
    }
    cout << s1 << endl;
}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}