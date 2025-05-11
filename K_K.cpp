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
int main()
{
    op();
    map<string, string> x1;

    int n, m;
    cin >> n >> m;
    while (n--)
    {
        string c1, c2;
        cin >> c1 >> c2;
        x1[c2] = c1;
        cin.ignore();
    }
    while (m--)
    {
        string c1, c2;
        cin >> c1 >> c2;
        cout << c1 << " " << c2 << " #";
        c2.erase(remove(c2.begin(), c2.end(), ';'), c2.end());
        cout << x1[c2] << endl;
    }
    return 0;
}