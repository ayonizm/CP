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
    ll p, q;
    cin >> p >> q;

    ll ans = 4 * q;
    ans *= p;

    for (ll i = 0; i < p; i++)
    {
        ll a, b;
        cin >> a >> b;

        if (i == 0)
        {
            continue;
        }

        ans = ans - (2 * (q - a + q - b));
    }

    cout << ans << endl;
}
int main(){
    op();
    ll l;
    cin >> l;

    while (l--)
    {
        solve();
    }

    return 0;
}