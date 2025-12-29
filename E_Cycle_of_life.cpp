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
const int M = 100005;
vector<double> d(M, 0.0);
vector<int> v[M];
void p()
{
    for (int i = 1; i < M; i++)
    {
        for (int j = i; j < M; j += i)
        {
            v[j].push_back(i);
        }
    }
}

void c()
{
    d[1] = 0.0;
    for (int n = 2; n < M; n++)
    {
        int s = v[n].size();
        double t = 0.0;
        for (int x : v[n])
        {
            if (x != n)
            {
                t += d[n / x];
            }
        }
        d[n] = (1.0 + t / s) / (1.0 - 1.0 / s);
    }
}

void solve()
{

    int n;
    cin >> n;
    printf("%.9f\n", d[n]);
}

int main()
{
    p();
    c();
    test(t)
    {
        solve();
    }

    return 0;
}