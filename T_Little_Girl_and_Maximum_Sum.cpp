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
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), p(n + 1);
    for (int &i : a)
        cin >> i;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        p[r]++;
        p[l - 1]--;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        p[i] += p[i + 1];
    }
    ll ans = 0;
    sort(a.begin(), a.end());
    sort(p.begin() + 1, p.end());
    for (int i = 1; i <= n; i++)
    {
        ans += a[i - 1] * p[i];
    }
    cout << ans;
}
int main(){
    op();
    // ll n = 1;
    // cin >> n;

    solve();
    return 0;
}