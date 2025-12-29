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
    if (n == 3)
    {
        cout << "1 3 2" << endl;
        return;
    }
    else
    {
        x.pb(2);
        x.pb(3);
        x.pb(n);
        n = n - 4;
        int k = 4;
        while (n--)
        {
            x.pb(k++);
        }
        x.pb(1);
    }
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    
    cout << endl;
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