#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
const ll M = 1e7 + 10;
ll ar[M];

int main(){
    op();
    ll n;
    cin >> n;

   ll f;
    cin >> f;
    while (f--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ar[a] += c;
        ar[b+1]-=c;
        
    }
    for (ll i = 1; i <=n; i++)
    {
        ar[i] += ar[i - 1];
    }
    ll mx = -1;
    for (ll i = 1; i <=n; i++)
    {
        if(ar[i]>mx){
            mx = ar[i];
        }
        // cout << ar[i] << endl;
    }
    cout << mx << endl;

    return 0;
}