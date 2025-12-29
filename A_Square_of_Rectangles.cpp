#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        vector<pair<int, int>> a(3);
        long long area = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i].first >> a[i].second;
            area += 1LL * a[i].first * a[i].second;
        }
        int s = (int)floor(sqrt(area));
        bool ok = false;
        if (1LL * s * s == area)
        {
            array<int, 3> p = {0, 1, 2};
            do
            {
                int l1 = a[p[0]].first, b1 = a[p[0]].second;
                int l2 = a[p[1]].first, b2 = a[p[1]].second;
                int l3 = a[p[2]].first, b3 = a[p[2]].second;
                if (l1 == s && l2 == s && l3 == s && b1 + b2 + b3 == s)
                    ok = true;
                if (b1 == s && b2 == s && b3 == s && l1 + l2 + l3 == s)
                    ok = true;
                if (b1 == s && l2 == s - l1 && l3 == s - l1 && b2 + b3 == s)
                    ok = true;
                if (l1 == s && b2 == s - b1 && b3 == s - b1 && l2 + l3 == s)
                    ok = true;
            } while (next_permutation(p.begin(), p.end()) && !ok);
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
