//************************************************************
//  █████  ██    ██   ██████   ███    ██ |
// ██   ██ ██    ██  ██    ██  ████   ██ |
// ███████   ████    ██    ██  ██ ██  ██ |
// ██   ██    ██     ██    ██  ██  ██ ██ |
// ██   ██    ██      ██████   ██   ████ |
// ************************************************************/
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
int bin1(vector<int> &x, int tar)
{
    int lo = -1;
    int hi = x.size();
    while (hi - lo > 1)
    {
        int mid = (lo + hi) / 2;

        if (x[mid] < tar)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    return hi;
}
int bin2(vector<int> &x, int tar)
{
    int lo = -1;
    int hi = x.size();
    while (hi - lo > 1)
    {
        int mid = (lo + hi) / 2;

        if (x[mid] >tar)
        {
            hi = mid;
        }
        else
        {
            lo = mid;
        }
    }
    return lo;
}
int main()
{
    op();
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(all(x));
    int m;
    cin >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;

        if (a > b){
            swap(a, b); 
        }

        int l = bin1(x, a);
        int r = bin2(x, b);

        if (l > r)
            cout << 0 << " ";
        else
            cout << r - l + 1 << " ";
    }
    cout << endl;

    return 0;
}
