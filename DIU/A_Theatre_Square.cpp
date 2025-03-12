#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
int main()
{
    op();
    ll n, m, a;
    cin >> n >> m >> a;
    ll f1 = (n + a - 1) / a;
    ll f2 = (m + a - 1) / a;
    ll f = f1 * f2;
    cout << f << endl;
    return 0;
}