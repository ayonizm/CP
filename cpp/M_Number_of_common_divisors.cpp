#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

ll vai(ll a, ll b) 
{ 
    ll n = __gcd(a, b); 
    ll r = 0; 
    for (ll i = 1; i * i <= n; i++) { 
        if (n % i == 0) { 
            if (n / i == i) {
                r += 1; 
            } else {
                r += 2; 
            }
        } 
    } 
    return r; 
} 

int main() {
    op();
    ll n;
    cin >> n;
    while (n--) {
        ll x, y;
        cin >> x >> y;
        ll p = vai(x, y);
        cout << p << endl;
    }
    return 0;
}
