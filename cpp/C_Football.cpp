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
    ll k;
    cin >> k;
    vector<ll> p1;
    vector<ll> p2;
    for (int i = 0; i < k; i++)
    {
        ll y;
        cin >> y;
        p1.push_back(y);
    }
    for (int i = 0; i < k; i++)
    {
        ll y;
        cin >> y;
        p2.push_back(y);
    }
    ll mx = 0;
    for (int i = 0; i < p1.size(); i++)
    {
        ll f = p1[i] * 20;
        f = f - (p2[i] * 10);
        mx = max(mx, f);
    }
    cout << mx << endl;
}
int main(){
    op();
    ll n;
    cin >> n;
    while(n--){
        solve();
    }

    return 0;
}