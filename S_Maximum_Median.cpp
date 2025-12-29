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
bool check(int arr[200005], long long x, int k, int Size)
{
    long long cnt = 0;

    for (int i = Size / 2; i < Size; i++)
    {
        if (x >= arr[i])
            cnt += x - arr[i];
        else
            break;
    }
    return cnt <= k;
}
void solve()
{
    int n, k, arr[200005];
    long long st = 0, en = 2e18, mid, ans = -1;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    while (st <= en)
    {
        mid = (st + en) / 2;

        if (check(arr, mid, k, n))
        {
            ans = max(ans, mid);
            st = mid + 1;
        }
        else
            en = mid - 1;
    }
    cout << ans;
}
int main()
{
    op();
    // test(t){
        solve();
        // }
        return 0;
}