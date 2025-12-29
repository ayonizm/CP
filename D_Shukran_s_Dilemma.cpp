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
    ll n, a, b;
    cin >> n >> a >> b;
    ll pz = 0;
    ll ck = 0;
    pz = (n / a);
    n -= (pz * a);
    ck = (n / b);
    if (pz == 0 && ck == 0)
    {
        cout << "batash khabo!" << endl;
    }
    else
    {
        if (pz != 0 && ck == 0)
        {
            cout << pz << " pizza khabo!" << endl;
        }
        else if (pz == 0 && ck != 0)
        {
            cout << ck << " coke khabo!" << endl;
        }
        else
        {
            cout << pz << " pizza khabo!" << endl;
            cout << ck << " coke khabo!" << endl;
        }
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