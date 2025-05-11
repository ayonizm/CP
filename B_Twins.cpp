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
    ll a;
    cin >> a;
    vector<ll> x;
    ll sum = 0;

    while (a--)
    {
        ll t;
        cin >> t;
        x.push_back(t);
        sum += t;
    }

    sort(x.begin(), x.end());

    ll s = 0;
    ll t = 0;

    for (int i = x.size() - 1; i >= 0; i--)
    {
        t += x[i];
        s++;
        if (t > (sum / 2))
        {
            break;
        }
    }

    cout << s << endl;

    return 0;
}
