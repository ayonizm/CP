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
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);

    }
    
    vector<int> r;
    for (int i = 0; i < n-1; i++)
    {
        if(x[i]>=x[i+1]){
            r.pb(x[i]);
            // debug(x[i]);
        }
    }

    if(r.size()==0){
        cout << 1 << endl;
        cout << x[x.size() - 1] << endl;
        return;
    }
    cout << r.size() + 1 << endl;
    for(auto v:r){
        cout << v <<" ";
    }
    cout << x[x.size() - 1] << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}