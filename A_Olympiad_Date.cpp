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
    map<int, int> x;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        x[p]++;
        if(x[0]>=3&&x[1]>=1&&x[2]>=2&&x[3]>=1&&x[5]>=1&&!r){
            cout << i + 1 << endl;
            r = 1;
        }
    }
    if(!r){
        cout << 0 << endl;
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