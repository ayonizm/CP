#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
ll NOD(ll n){
    ll div = 1;
    for (ll i = 2; i * i<=n ; i++)
    {
        ll power = 0;
        while (n%i==0)
        {
            power++;
            n = n / i;
        }
        div = div * (power + 1);
    }
    if(n>=2){
        div = div * (1 + 1);
    }
    return div;
}

int main(){
    op();
    ll a, b;
    cin >> a >> b;
    ll c;
    cin >> c;
    ll ct = 0;
    for (ll i = a; i <=b ; i++)
    {
        if(NOD(i)==c){
            ct++;
        }
    }
    cout << ct << endl;

    return 0;
}