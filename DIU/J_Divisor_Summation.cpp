#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
ll SOD(ll n) {
    ll sod = 1;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            ll pow = 1;
            while (n % i == 0) {
                pow *= i; // p^e
                n /= i;
            }
            pow *= i; // p^e+1
            sod *= (pow - 1) / (i - 1);
        }
    }
    if (n > 1) sod *= (n + 1);
    return sod;
}
int main(){
    op();
    ll k;
    cin >> k;
    while (k--)
    {
        ll p;
        cin >> p;
        cout << SOD(p)-p << endl;
    }
    
    return 0;
}