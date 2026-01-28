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
void f(int i, int s, vector<int> &v, vector<int> &c, vector<vector<int>> &r)
{
    if (s == 6)
    {
        r.push_back(c);`
        return;
    }
    if (i >= v.size())
    {
        return;
    }

    c.push_back(v[i]);
    f(i + 1, s + 1, v, c, r);
    c.pop_back();
    f(i + 1, s, v, c, r);
}

int main()
{
    op();
    bool t = true;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> c;
        vector<vector<int>> r;
        f(0, 0, v, c, r);
        if (!t)
        {
            cout << endl;
        }
        t = false;

        for (auto x : r)
        {
            for (int i = 0; i < 6; i++)
            {
                cout << x[i];
                if (i < 5)
                    cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}