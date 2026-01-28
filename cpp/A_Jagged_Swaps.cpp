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
    set<int> p;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
        p.insert(t);
    }
    if(p.size()!=n){
        cout << "NO" << endl;
        return;
    }
    bool ok = true;
    while (ok)
    {
        ok = false;
        for (int i = 1; i < n - 1;i++)
        {
            if (x[i - 1] < x[i] && x[i] > x[i + 1])
            {
                swap(x[i], x[i + 1]);
                ok = true;
            }
        }
    }
    if (is_sorted(all(x))){
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