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

#define ll long long int
void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b <= a && b <= c)
    {
        cout << "Gellyfish" endl;
    }
    else if (a < d)
    {
        cout << "Flower" endl;
    }
    else if (d <= c)
    {
        cout << "Gellyfish" endl;
    }
    else
    {
        cout << "Flower" endl;
    }
}

int main()
{
    test(t)
    {
        solve();
    }
    return 0;
}