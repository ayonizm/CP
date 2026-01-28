#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0;
    vector<int64> m(n), c(n);
    for (int i = 0; i < n; ++i)
        cin >> m[i];
    for (int i = 0; i < n; ++i)
        cin >> c[i];

    int64 bestP = -1;
    int64 bestR = -1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int64 sum = m[i] + m[j];
            int64 den = c[i] + c[j] + 1;
            int64 p = sum / den;
            int64 r = sum % den;
            if (p > bestP || (p == bestP && r > bestR))
            {
                bestP = p;
                bestR = r;
            }
        }
    }

    cout << bestP << " " << bestR << "\n";
    return 0;
}
