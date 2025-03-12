#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
ll spd(ll n)
{
    ll sum = 0;
    for (ll i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            sum += i; 
            if (i != 1 && i != n / i && n / i < n)
            {
                sum += n / i; 
            }
        }
    }
    return sum;
}
int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << spd(n) << "\n";
    }

    return 0;
}
