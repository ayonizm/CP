#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
const int MX = 200005;
int frq[MX], ans[MX];
int main()
{
    op();
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        frq[l]++;
        r++;
        frq[r]--;
    }
    for (int i = 1; i < MX; i++)
    {
        frq[i] += frq[i - 1];
        if (frq[i] >= k)
        {
            ans[i] = 1;
        }
        ans[i] += ans[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << ans[b] - ans[a - 1] << endl;
    }

    return 0;
}