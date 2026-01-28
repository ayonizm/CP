#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
void solve(){
    ll n, p;
    cin >> n >> p;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll pre[n + 1];
    pre[0] = 0;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (arr[i - 1] == 0)
        {
            pre[i] = pre[i - 1] + a[i - 1];
        }
        else
        {
            ans += a[i - 1];
            pre[i] = pre[i - 1];
        }
    }
    ll ay = 0;
    for (ll i = 0; i <= n - p; i++)
    {
        ay = max(ay, pre[i + p] - pre[i]);
    }
    cout << ans + ay << endl;
}
int main(){
    op();
    solve();

    return 0;
}