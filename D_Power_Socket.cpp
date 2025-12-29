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
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ay1 = 0, ay2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != a[i] % 2)
        {
            if (i % 2 == 0){
                ay1++;
            }
            else{
                ay2++;
            }
        }
    }

    if (ay1 != ay2)
        cout << -1 << endl;
    else
        cout << ay1 << endl;

}
int main()
{
    op();
    test(t){
        solve();
    }
    return 0;
}