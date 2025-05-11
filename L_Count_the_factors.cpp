#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
set<ll> primefactor(ll n) {
    set<ll> factors;
    if (n == 1) {
        factors.insert(1);
        return factors;
    }
    while (n % 2 == 0) {
        factors.insert(2);
        n /= 2;
    }
    for (ll i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.insert(i);
            n /= i;
        }
    }
    if (n > 2) {
        factors.insert(n);
    }
    return factors;
}
int main(){
    op();
    ll k;
    while (cin>>k)
    {
        if(k==0){
            break;
        }
    set<ll> x = primefactor(k);
    cout << k << " : " << x.size() << endl;
    }
    return 0;
}