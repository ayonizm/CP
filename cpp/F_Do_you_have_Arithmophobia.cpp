#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define MAX 1000000

bool flag[MAX + 1];
ll prime[MAX + 5];
ll total = 0;

void sieve()
{
    fill(flag, flag + MAX + 1, true);
    flag[0] = flag[1] = false;
    for (ll i = 2; i * i <= MAX; i++)
    {
        if (flag[i])
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                flag[j] = false;
            }
        }
    }
    for (ll i = 2; i <= MAX; i++)
    {
        if (flag[i])
        {
            prime[total++] = i;
        }
    }
}

vector<ll> c1;

void segsieve(ll l, ll r)
{
    if (l == 1)
        l++;
    ll mx = r - l + 1;
    vector<bool> ar(mx + 1, true);

    for (ll k = 0; prime[k] * prime[k] <= r; k++)
    {
        ll v = prime[k];
        ll i = (l / v) * v;
        if (i < l)
            i += v;
        if (i == v)
            i += v;
        for (; i <= r; i += v)
        {
            ar[i - l] = false;
        }
    }

    for (ll i = 0; i < mx; i++)
    {
        if (ar[i])
        {
            c1.push_back(i + l);
        }
    }
}

bool pal(ll x)
{
    string s = to_string(x);
    string k = s;
    reverse(s.begin(), s.end());
    return k == s;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    sieve();
    segsieve(a, b);
    ll ct = 0;
    for (ll x : c1)
    {
        if (pal(x))
            ct++;
    }
    cout << ct << endl;
}

int main()
{
    op();
    solve();
    return 0;
}
