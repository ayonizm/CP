#include <bits/stdc++.h>
#define int long long
#define MOD 998244353
using namespace std;

vector<int> pow2 = {1};

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n), q(n), posP(n), posQ(n), Pmax(n), Qmax(n), r(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> p[i];
            posP[p[i]] = i;
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> q[i];
            posQ[q[i]] = i;
        }

        if (pow2.size() <= n)
        {
            int old = pow2.size();
            pow2.resize(n + 1);
            for (int i = old; i <= n; ++i)
            {
                pow2[i] = (pow2[i - 1] * 2) % MOD;
            }
        }

        Pmax[0] = p[0];
        Qmax[0] = q[0];
        for (int i = 1; i < n; ++i)
        {
            Pmax[i] = max(Pmax[i - 1], p[i]);
            Qmax[i] = max(Qmax[i - 1], q[i]);
        }

        for (int i = 0; i < n; ++i)
        {
            int e = max(Pmax[i], Qmax[i]);
            int s;
            if (Pmax[i] > Qmax[i])
            {
                int j = posP[e];
                int k = i - j;
                s = q[k];
            }
            else if (Qmax[i] > Pmax[i])
            {
                int k = posQ[e];
                int j = i - k;
                s = p[j];
            }
            else
            {
                int j1 = posP[e], k1 = i - j1, s1 = (k1 >= 0 && k1 < n) ? q[k1] : -1;
                int j2 = posQ[e], k2 = i - j2, s2 = (k2 >= 0 && k2 < n) ? p[k2] : -1;
                s = max(s1, s2);
            }
            r[i] = (pow2[e] + pow2[s]) % MOD;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << r[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
