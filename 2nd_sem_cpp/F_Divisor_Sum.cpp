#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
ll SOD(ll n)
{
    ll sod = 1;
    for (ll i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            ll pow = 1;
            while (n % i == 0)
            {
                pow *= i; // p^e
                n /= i;
            }
            pow *= i; // p^e+1
            sod *= (pow - 1) / (i - 1);
        }
    }
    if (n > 1)
        sod *= (n + 1);
    return sod;
}
int main()
{
    op();
    ll n;
    cin >> n;
    ll s = 0;
    for (int i = 1; i <=n; i++)
    {
        s += (n/i)*i;
    }
    cout << s << endl;
    return 0;
}