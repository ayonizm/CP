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
    ll n, k;
    cin >> n >> k;
    ll od = (n + 1) / 2; 
    if (k <= od)
    {
        cout << 2 * k - 1 << endl; 
    }
    else
    {
        cout << 2 * (k - od) << endl;
    }

    return 0;
}