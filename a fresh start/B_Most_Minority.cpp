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
#include <bits/stdc++.h>
using namespace std;

#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
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
char ar[200][200];
void solve()
{
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < b; j++)
        {
            ar[i][j] = s[j];
        }
    }
    map<int, int> x;
    int r = INT_MIN;
    for (int j = 0; j < b; j++)
    {
        int z = 0, o = 0;
        for (int i = 0; i < a; i++)
        {
            if (ar[i][j] == '0'){
                z++;
            }
            else{
                o++;
            }
        }
        if (z == 0 || o == 0)
        {
            for (int i = 0; i < a; i++)
            {
                x[i]++;
                r = max(r, x[i]);
            }
        }
        else if (z < o)
        {
            for (int i = 0; i < a; i++)
            {
                if (ar[i][j] == '0')
                {
                    x[i]++;
                    r = max(r, x[i]);
                }
            }
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                if (ar[i][j] == '1')
                {
                    x[i]++;
                    r = max(r, x[i]);
                }
            }
        }
    }
    for (auto v : x)
    {
        if (v.ss == r)
        {
            cout << v.ff + 1 << " ";
        }
    }
    cout << endl;
}

int main()
{
    op();
    solve();
    return 0;
}