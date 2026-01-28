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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;
    int count = 0;
    int j = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        if (mp[arr[i]] == 1)
        {
            count++;
        }
        while (count > 2)
        {
            mp[arr[j]]--;
            if (mp[arr[j]] == 0)
            {
                count--;
            }
            j++;
        }
        ans = max(i - j + 1, ans);
    }

    cout << ans << endl;
}
int main()
{
    op();
    // test(t){
        solve();
    // }
    return 0;
}