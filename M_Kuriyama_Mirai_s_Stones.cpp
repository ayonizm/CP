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
const int N = 1e5 + 10;
ll pre[N];
ll s_pre[N];
void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == 1)
    {
        cout << pre[c] - pre[b - 1] << endl;
    }
    else
    {
        cout << s_pre[c] - s_pre[b - 1] << endl;
    }
}
int main(){
    op();
    pre[0] = 0;
    s_pre[0] = 0;
    ll n;
    cin >> n;
    vector<ll> x;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        x.push_back(a);
        pre[i + 1] = pre[i] + a;
    }
    sort(x.begin(), x.end());
    for (ll i = 0; i < x.size(); i++)
    {
        s_pre[i + 1] = s_pre[i] + x[i];
    }
    ll p;
    cin >> p;
    while (p--)
    {
        solve();
    }
    

    return 0;
}