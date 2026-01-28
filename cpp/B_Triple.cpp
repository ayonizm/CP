#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
void solve(){
    ll n;
    cin >> n;
    map<ll, ll> x;
    ll f =-1;

    while (n--)
    {
        ll p;
        cin >> p;
        x[p]++;
        if(x[p]==3){
            // cout << p << endl;
            f = p;
        }
    }
    cout << f << endl;
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