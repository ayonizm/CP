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
ll huffman_encoding(vector<ll> &f)
{
    priority_queue<ll, vector<ll>, greater<ll>> q;
    for (ll x : f)
        q.push(x);

    ll res = 0;
    while (q.size() > 1)
    {
        ll a = q.top();
        q.pop();
        ll b = q.top();
        q.pop();
        ll m = a + b;
        res += m;
        q.push(m);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> f(n);
        for (int i = 0; i < n; i++)
            cin >> f[i];

        ll ans = huffman_encoding(f);
        cout << ans << endl;

        if (t != 0)
            cout << endl;
    }
}