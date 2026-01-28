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
struct N
{
    int f;
    vector<int> c;

    N(int freq = 0) : f(freq) {}
};

void solve()
{
    int t = 1;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;

        vector<string> s(n);
        vector<N> nds;

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        nds.clear();
        map<string, int> m;

        for (int i = 0; i < n; i++)
        {
            nds.push_back(N(1));
            m[s[i]] = i;
        }

        vector<int> l(n);
        for (int i = 0; i < n; i++)
        {
            l[i] = s[i].length();
        }

        while (nds.size() > 1)
        {
            sort(nds.begin(), nds.end(), [](N &a, N &b)
                 { return a.f < b.f; });

            N tmp(nds[0].f + nds[1].f);
            tmp.c.push_back(0);
            tmp.c.push_back(1);

            nds.push_back(tmp);

            nds.erase(nds.begin());
            nds.erase(nds.begin());
        }

        int res = 1;

        for (int i = 0; i < nds.size(); i++)
        {
            res *= (nds[i].f + 1);
        }

        cout << "Case " << t++ << ": " << res << endl;
    }
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}