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
    vector<ll> x;
    map<ll, ll> c;

    for (int i = 0; i < n; i++)
    {
        ll u;
        cin >> u;
        x.push_back(u);
        c[u]++;
    }
    
    

    ll pos = 0;
    for (int i= 1; i <= n; i++)
    {
        if(c[i]==0){
            pos++;
            
        }
    }
    cout << pos << endl;
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