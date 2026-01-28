#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ot()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{

    ll a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 1 << endl;
        return 0;
    }

    vector<ll> v;

    for (ll i = 0; i < a; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }

    pair<ll, ll> p = {INT_MAX, INT_MAX};
    ll sum = 0;
    ll pq = 0;

    for (ll i = 0; i < a; i++)
    {
        sum += v[i];
        // cout << sum << endl;
        if ((i - pq + 1) == b)
        {
            if (sum < p.first)
            {
                p.first = sum;
                p.second = pq + 1;
            }

            sum -= v[pq];
            pq++;
        }

        // pq  i  sum

    }

    cout << p.second << endl;
}