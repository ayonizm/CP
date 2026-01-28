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
void solve()
{

    ll a, b;
    cin >> a >> b;
    ll q = 1;
    while (q * 2 <= a)
    {
        q *= 2;
        // debug(q);
    }
    ll rem = a - q;

    ll ct = 0;
    ll ay = a;

    while (ay <= b)
    {
        ct++;
        q *= 2;
        ay = q + rem;
        // debug(ay);
        // debug(b);
    }

    cout << ct << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}