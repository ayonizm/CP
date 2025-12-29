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
#define all(v) v.begin(), v.end()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int

// bool oi(vector<int> &x, vector<int> &l, vector<int> &r, vector<int> &v, int n)
// {
//     int h = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (x[i] == 0 && v[i] != 0)
//             return false;
//         if (x[i] == 1 && v[i] != 1)
//             return false;
//         h += v[i];
//         if (h < l[i] || h > r[i])
//             return false;
//     }
//     return true;
// }

void solve()
{
    int n;
    cin >> n;
    vector<int> d(n), r(n);

    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }

    vector<int> s(n, 0);
    long long h = 0;
    bool p = true;

    for (int i = 0; i < n; i++)
    {
        if (d[i] != -1)
        {
            h += d[i];
            s[i] = d[i];
        }
        else
        {
            long long q = r[i] - h;
            if (q == 0 || q == 1)
            {
                s[i] = q;
                h += q;
            }
            else
            {
                p = false;
                break;
            }
        }

        if (h != r[i])
        {
            p = false;
            break;
        }
    }

    if (!p)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
            if (i < n - 1)
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    op();
    test(t)
    {
        solve();
    }
    return 0;
}