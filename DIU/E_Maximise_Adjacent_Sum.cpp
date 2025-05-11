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
    ll n;
    cin >> n;
    vector<ll> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    ll sum = 0;
    for (int i = 0; i < x.size()-1; i++)
    {
        sum += (x[i] + x[i + 1]);
    }
    cout << sum << endl;
}
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    

    return 0;
}