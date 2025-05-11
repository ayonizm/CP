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

int main()
{
    op();
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].ff;
        a[i].ss = i + 1;
    }
    sort(a, a + n);
    ll m = 9e10;
    int p, q;
    for (int i = 1; i < n; i++) {
        ll d = abs(a[i].ff - a[i - 1].ff);
        if (d < m) {
            m = d;
            p = a[i - 1].ss;
            q = a[i].ss;
        }
    }
    cout << m << endl;
    cout << q << " " << p << endl;


    return 0;
}