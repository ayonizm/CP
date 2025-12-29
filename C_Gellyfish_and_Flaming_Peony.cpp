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
    vector<int> a(n);
    int g = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        g = __gcd(g, a[i]);
    }

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == g)
        {
            c++;
        }
    }

    if (c > 0)
    {
        cout << n - c << endl;
        return;
    }

    char m = 'z';
    for (int i = 0; i < n; i++)
    {
        int t = a[i];
        for (int j = 0; j < n; j++)
        {
            t = __gcd(t, a[j]);
            if (t == g)
            {
                m = min(m, (char)2);
            }
        }
    }

    if (m == 'z')
    {
        cout << n << endl;
    }
    else
    {
        cout << m + (n - 1) << endl;
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