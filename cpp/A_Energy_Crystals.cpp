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

#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
void solve()
{
    ll x;
    cin >> x;
    int k = 0;
    ll temp = x;
    while (temp > 0)
    {
        temp /= 2;
        k++;
    }

    ll ans = 1LL * 2 * k + 1;
    cout << (ll)ans << endl;
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