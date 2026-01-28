#include <bits/stdc++.h>
using namespace std;

static const long long INF = 1e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> b(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        vector<array<int, 3>> ops(q);
        for (int i = 0; i < q; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            ops[i] = {x, y, z};
        }

        // Start with the array b, and initialize 'a' from 'b'
        vector<long long> a = b;

        // Process operations in reverse
        bool valid = true;
        for (int i = q - 1; i >= 0; i--)
        {
            int x = ops[i][0], y = ops[i][1], z = ops[i][2];

            // We are processing b[zi] as a result of the operation, so we must ensure:
            // b[zi] must be at least the minimum of b[xi] and b[yi]
            if (b[z] < min(b[x], b[y]))
            {
                valid = false;
                break;
            }

            // Propagate the possible values of a, maintaining consistency with b
            // For consistency, set a[zi] to min(a[xi], a[yi])
            a[z] = min(a[x], a[y]);
        }

        // If invalid, output -1
        if (!valid)
        {
            cout << "-1\n";
        }
        else
        {
            // Output the reconstructed array a
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << (i == n ? '\n' : ' ');
            }
        }
    }

    return 0;
}
