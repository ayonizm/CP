#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    ll ar[n];
    vector<ll> pp(n+1,0);
    ll q;
    for (ll i = 0; i < q; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        pp[a - 1] += c;
        pp[b] -= c;
    }
    for (int i = 1; i <=n; i++)
    {
        pp[i] = pp[i - 1] + pp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] + pp[i] << " ";
    }
    
    
    
    


    return 0;
}