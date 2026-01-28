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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int a = 0;
    for (char c : s)
    {
        if (c == '0')
        {
            a++;
        }
    }

    int b = n - a;
    int p = n / 2;
    int q = p - k;

    if (a < q || b < q)
    {
        cout << "NO"<<endl;
        return;
    }

    int x = (a - q) / 2;
    int y = (b - q) / 2;
    int z = x + y;

    if (z >= k)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
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