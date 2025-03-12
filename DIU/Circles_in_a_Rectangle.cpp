#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
const double pi = 3.1416;
int main()
{
    op();
    int l;
    cin >> l;
    ll t = 1;
    while (l--)
    {
        double p;
        cin >> p;
        double f = 2.0 * pi * p * p;
        double len = p * 4.0;
        double wid = p * 2.0;
        double ar = len * wid;
        printf("Case %lld: %.2lf\n", t++,ar - f);
    }
    return 0;
}