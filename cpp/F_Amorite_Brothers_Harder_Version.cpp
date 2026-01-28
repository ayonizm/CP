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
int precom(const string &oi, int a)
{
    int k1 = 0;
    for (int i = 0; i < oi.length(); i++)
    {
        k1 = (k1 * 10 + (oi[i] - '0')) % a;
    }
    return k1;
}

void solve()
{
    string n;
    cin >> n;

    vector<int> ay = {3, 4, 5, 6, 8, 9, 11,12,13,17};

    for (int i = 0; i < ay.size(); i++)`
    {
        int b1 = ay[i];
        if (precom(n, b1) == 0)
        {
            cout << b1 << "-AmoriteBrother" << endl;
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