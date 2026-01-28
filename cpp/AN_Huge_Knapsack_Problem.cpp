#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
const int N = 50;
int n;
ll ans, w[N], v[N];
vector<pll> g1, g2;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll W;
    cin >> n >> W;
    for (int i = 0; i < n; ++i)
        cin >> v[i] >> w[i];
    int n1 = n / 2, n2 = n - n1;
    for (int mask = 0; mask < (1 << n1); ++mask)
    {
        ll sw = 0, sv = 0;
        for (int i = 0; i < n1; ++i)
            if (mask & (1 << i))
                sw += w[i], sv += v[i];
        g1.emplace_back(sw, sv);
    }
    for (int mask = 0; mask < (1 << n2); ++mask)
    {
        ll sw = 0, sv = 0;
        for (int i = 0; i < n2; ++i)
            if (mask & (1 << i))
                sw += w[n1 + i], sv += v[n1 + i];
        g2.emplace_back(sw, sv);
    }
    sort(g2.begin(), g2.end());
    vector<ll> w2, v2(g2.size() + 1);
    for (int i = 0; i < g2.size(); ++i)
    {
        w2.push_back(g2[i].first);
        v2[i + 1] = max(v2[i], g2[i].second);
    }
    for (int i = 0; i < g1.size(); ++i)
    {
        ll w1 = g1[i].first, v1 = g1[i].second;
        auto it = upper_bound(w2.begin(), w2.end(), W - w1) - w2.begin();
        if (it)
            ans = max(ans, v1 + v2[it]);
    }

    cout << ans << '\n';
}