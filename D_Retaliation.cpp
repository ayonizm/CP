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
    ll n;
    cin >> n;
    vector<ll> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    ll dif = x[1] - x[0];
    // debug(dif);
    for (int i = 1; i < n - 1; i++)
    {
        // debug(x[i + 1] - x[i]);
        if (x[i + 1] - x[i] != dif)
        {
            cout << "NO" << endl;
            return;
        }
    }
    ll n1 = n + 1;
    if ((x[0] - dif) % n1 != 0)
    {
        // debug(x[0] - dif);
        cout << "NO" << endl;
        return;
    }
    ll num = x[0] + dif * n*1LL;
    // debug(num);
    if (num < 0)
    {
        cout << "NO" << endl;
        return;
    }
    else if (num % n1 != 0)
    {
        cout << "NO" << endl;
        return;
    }
  else{
      ll c = x[0] - dif;
      ll k1 = c / (n1);
      ll k2 = k1 + dif;
    //   debug(k1);
    //   debug(k2);
      if (c < 0 || c % (n1) != 0 || k2 < 0 || k1 < 0)
      {
          cout << "NO" << endl;
          return;
      }
  }
    cout << "YES" << endl;
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