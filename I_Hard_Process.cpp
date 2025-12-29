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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int kt = 0;
    int l = 0, r = -1;
    int j = 0;
    int zct = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zct++;
        }
        while (zct > k)
        {
            if (arr[j] == 0)
            {
                zct--;
            }
            j++;
        }
        if (i - j + 1 > kt)
        {
            kt = i - j + 1;
            l = j;
            r = i;
        }
    }
    for (int i = l; i <= r; i++)
    {
        arr[i] = 1;
    }
    cout << kt << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}