#include <bits/stdc++.h>
#define GRP   \
    int T;    \
    cin >> T; \
    while (T--)
#define FAST                     \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define rep(i, a, b) for (int i = a; i <= b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
typedef long long ll;
using namespace std;

const int MAXV = 100001; // Adjust based on max possible value (N * max(v))
const ll INF = 1e18;

ll N, W;
struct node
{
    ll w, v, m;
    node() = default;
    node(ll _w, ll _v, ll _m) : w(_w), v(_v), m(_m) {}
};

ll dp[MAXV]; // Minimum weight to achieve value i
node a[101]; // Array of items (N <= 100)
ll ans;

int main()
{
    FAST;
    GRP
    {
        // Initialize
        fill(dp, dp + MAXV, INF);
        dp[0] = 0;
        ans = 0;

        // Read input
        cin >> N >> W;
        if (!cin || N < 0 || W < 0)
        {
            cout << "Invalid input\n";
            continue;
        }
        if (N == 0 || W == 0)
        {
            cout << 0 << endl;
            continue;
        }

        // Read items
        rep(i, 1, N)
        {
            cin >> a[i].w >> a[i].v >> a[i].m;
            if (!cin || a[i].w < 0 || a[i].v < 0 || a[i].m < 0)
            {
                cout << "Invalid item input\n";
                return 1;
            }
            // Debugging: Print item details
            // cerr << "Item " << i << ": w=" << a[i].w << ", v=" << a[i].v << ", m=" << a[i].m << endl;
        }

        // Sort items by weight/value ratio (handle v=0)
        sort(a + 1, a + 1 + N, [](const node &c, const node &d) -> bool
             {
            if (c.v == 0 && d.v == 0) return c.w < d.w;
            if (c.v == 0) return true;
            if (d.v == 0) return false;
            return (double)c.w / c.v < (double)d.w / d.v; });

        // Dynamic Programming
        int max_value = 0;
        rep(i, 1, N)
        {
            if (a[i].v == 0 && a[i].w > 0)
                continue; // Skip items with v=0 and w>0
            rep(k, 1, min(a[i].m, W / max(1LL, a[i].w)))
            { // Limit m by W/w
                rrep(j, MAXV - 1, a[i].v)
                {
                    if (dp[j - a[i].v] != INF)
                    {
                        dp[j] = min(dp[j], dp[j - a[i].v] + a[i].w);
                    }
                }
                max_value = max(max_value, (int)(min(a[i].m, W / max(1LL, a[i].w)) * a[i].v));
            }
        }

        // Find maximum value within weight limit
        rep(i, 0, min(max_value, MAXV - 1))
        {
            if (dp[i] != INF && dp[i] <= W)
            {
                ans = max(ans, (ll)i);
            }
        }

        // Debugging: Print final dp values
        // rep(i, 0, min(max_value, 10)) {
        //     cerr << "dp[" << i << "] = " << (dp[i] == INF ? "INF" : to_string(dp[i])) << endl;
        // }

        cout << ans << endl;
    }
    return 0;
}