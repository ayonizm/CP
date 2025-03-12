// #include<bits/stdc++.h>
// using namespace std;
// #define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl "\n"
// #define ll long long int
// const ll mod = 1e9 + 7;
// const ll MAX = 5e5 + 5;
// vector<ll> facto(MAX + 5, 1);
// void precompute_fac(){
//     for (int i = 2; i <=MAX; i++)
//     {
//         facto[i] = (facto[i - 1]%mod * i%mod) % mod;
//     }
// }
// ll NOD(ll n){
//     ll div = 1;
//     for (ll i = 2; i * i<=n ; i++)
//     {
//         ll power = 0;
//         while (n%i==0)
//         {
//             power++;
//             n = n / i;
//         }
//         div = div * (power + 1);
//     }
//     if(n>2){
//         div = div * (1 + 1);
//     }
//     return div;
// }
// int main(){
//     op();
//     precompute_fac();
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll a;
//         cin >> a;
//         if(a==2){
//             cout << "2" << endl;
//             continue;
//         }
//         cout << NOD(facto[a])<<endl;
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
const ll mod = 1e9 + 7;
const ll MAX = 5e4 + 5;

vector<ll> primes;
vector<bool> is_prime(MAX, true);
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i < MAX; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
ll prime_power_in_factorial(ll a, ll p) {
    ll power = 0;
    while (a > 0) {
        a /= p;
        power += a;
    }
    return power;
}


ll NOD_of_factorial(ll a) {
    ll div = 1;
    for (ll prime : primes) {
        if (prime > a) break; 
        ll power = prime_power_in_factorial(a, prime);
        div = div * (power + 1) % mod;
    }
    return div;
}

int main() {
    op();
    sieve(); 
    
    ll n;
    cin >> n;
    while (n--) {
        ll a;
        cin >> a;
        if (a == 0 || a == 1) {
            cout << "1" << endl; 
        } else {
            cout << NOD_of_factorial(a) << endl;
        }
    }
    
    return 0;
}
