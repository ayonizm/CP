// #include <bits/stdc++.h>
// using namespace std;
// #define op()                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define test(t) \
//     int t;      \
//     cin >> t;   \
//     while (t--)
// #define MOD 1000000007
// #define MOD1 998244353
// #define endl "\n"
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(vec) vec.begin(), vec.end()
// #define PI 3.141592653589793238462
// #define debug(x) cout << #x << " " << x << endl;
// #define ll long long int
// void solve()
// {
//     int a, b;
//     cin >> a >> b;
//     for (int i = 0; i < a; i++)
//     {
//         b *= 2;
//     }
//     cout << b << endl;
// }
// int main()
// {
//     op();
//     test(t){
//         solve();
//     }
//     return 0;
// }
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
ll k, a;
bool f;
void ay(ll v, ll c)
{
    if (f)
    {
        return;
    }
    if (c == k)
    {
        a = v;
        f = true;
        return;
    }

    ay(v * 2, c + 1);

    if (f)
    {
        return;
    }

    if ((v - 1) % 3 == 0)`
    {
        ll p = (v - 1) / 3;
        if (p % 2 == 1)
        {
            ay(p, c + 1);
        }
    }
}

void solve()
{
    ll x;
    cin >> k >> x;
    f = false;
    ay(x, 0);
    cout << a << endl;
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