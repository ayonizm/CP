#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pii pair<int, int>
#define vec vector
#define all(a) (a).begin(), (a).end()

void solve()
{
    int n, m;
    cin >> n >> m;
    vec<int> a(m);
    for (int i = 0; i < m; ++i)
        cin >> a[i];

    vec<pii> v(m);
    for (int i = 0; i < m; ++i)
    {
        int f = a[i] / 100;
        v[i] = {f, a[i]};
    }

    sort(all(v), [](const pii &x, const pii &y)
         {
        if (x.first != y.first) return x.first < y.first;
        return x.second < y.second; });

    vec<int> f(m), idx(m);
    for (int i = 0; i < m; ++i)
    {
        f[i] = v[i].first;
        idx[i] = v[i].second;
    }

    vec<ll> t(n);
    for (int i = 0; i < n; ++i)
    {
        t[i] = abs((ll)f[i] - (ll)f[m - 1 - i]);
    }

    vec<ll> p(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        p[i] = p[i - 1] + t[i - 1];
    }

    ll best = -1;
    int b = 0;
    for (int k = 0; k <= n; ++k)
    {
        ll val = p[k] + p[n - k];
        if (val > best)
        {
            best = val;
            b = k;
        }
    }

    int k = b;
    vec<int> A(n), B(n);
    int cnt = 0;
    for (int i = 0; i < k; ++i)
    {
        A[cnt++] = idx[i];
    }
    for (int i = m - (n - k); i < m; ++i)
    {
        A[cnt++] = idx[i];
    }

    cnt = 0;
    for (int i = 0; i < n - k; ++i)
    {
        B[cnt++] = idx[i];
    }
    for (int i = m - k; i < m; ++i)
    {
        B[cnt++] = idx[i];
    }

    for (int i = 0; i < n; ++i)
    {
        int ar = A[i], br = B[n - 1 - i];
        for (int j = 0; j < 6; ++j)
        {
            if (j % 2 == 0)
                cout << ar;
            else
                cout << br;
            if (j < 5)
                cout << ' ';
        }
        cout << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
}
