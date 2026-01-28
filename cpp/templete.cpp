#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
//.....................*sieve*(total,primecheck,nth prime)........................................
// #define MAX 10000000
// bool flag[MAX + 1];
// ll prime[MAX + 5];
// ll total = 0;
// void sieve(){
//     flag[0] = false;
//     flag[1] = false;
//     for (ll i = 2; i <=MAX ; i++)
//     {
//         flag[i] = true;
//     }
//     ll f = sqrt(MAX);
//     for (ll i = 0; i<=f; i++)
//     {
//         if(flag[i]){
//             for (ll j = i*i; j <=MAX; j+=i)
//             {
//                 flag[j] = false;
//             }
//         }
//     }
//     for (ll i = 2; i <=MAX; i++)
//     {
//         if(flag[i]){
//             prime[total++] = i;
//         }
//     }
// }
/*..........................segmented sieve...................................................*/
// void segsieve(ll l, ll r) {
//     if (l == 1) {
//         l++;
//     }
//     ll mx = r - l + 1;
//     bool ar[mx + 1];
//     for (ll i = 0; i <= mx; i++) {
//         ar[i] = true;
//     }
//     for (ll k = 0;prime[k] * prime[k] <= r; k++) {
//         ll v = prime[k];
//         ll i = (l / v) * v;
//         if (i < l) {
//             i += v;
//         }
//         if (i == v) {
//             i += v;
//         }
//         for (; i <= r; i += v) {
//             ar[i - l] = false;
//         }
//     }
//     for (ll i = 0; i < mx; i++) {
//         if (ar[i]) {
//             cout << i + l << " ";
//         }
//     }
// }

// ll commondiv(ll a, ll b)
// {
//     ll n = __gcd(a, b);
//     ll r = 0;
//     for (ll i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             if (n / i == i) {
//                 r += 1;
//             } else {
//                 r += 2;
//             }
//         }
//     }
//     return r;
// }

// ll lcm(ll a,ll b,ll gc){
//     return (a * b) / gc;
// }

// vector<ll> primefactor(ll n) {
//     vector<ll> factors;
//     if (n == 1) {
//         factors.push_back(1);
//         return factors;
//     }
//     while (n % 2 == 0) {
//         factors.push_back(2);
//         n /= 2;
//     }
//     for (ll i = 3; i * i <= n; i += 2) {
//         while (n % i == 0) {
//             factors.push_back(i);
//             n /= i;
//         }
//     }
//     if (n > 2) {
//         factors.push_back(n);
//     }
//     return factors;
// }
// ll digitsum(ll x){
//     string k = to_string(x);
//     ll sum = 0;
//     for (int i = 0; i < k.length(); i++)
//     {
//         sum += k[i] - '0';
//     }
//     return sum;
// }
// ll SOD(ll n)
// {
//     ll sod = 1;
//     for (ll i = 2; i * i <= n; ++i)
//     {
//         if (n % i == 0)
//         {
//             ll pow = 1;
//             while (n % i == 0)
//             {
//                 pow *= i; // p^e
//                 n /= i;
//             }
//             pow *= i; // p^e+1
//             sod *= (pow - 1) / (i - 1);
//         }
//     }
//     if (n > 1)
//         sod *= (n + 1);
//     return sod;
// }
// bool palindrom(string s){
//     string k = s;
//     reverse(s.begin(), s.end());
//     if(s==k){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// ll NOD(ll n)
// {
//     ll div = 1;
//     for (ll i = 2; i * i <= n; i++)
//     {
//         ll power = 0;
//         while (n % i == 0)
//         {
//             power++;
//             n = n / i;
//         }
//         div = div * (power + 1);
//     }
//     if (n >= 2)
//     {
//         div = div * (1 + 1);
//     }
//     return div;
// }

// // factoriallllllllllllllllllllllllllllllll
// // const ll mod = 1e9 + 7;
// // const ll MAX = 5e5 + 5;
// // vector<ll> facto(MAX + 5, 1);
// // void precompute_fac(){
// //     for (int i = 2; i <=MAX; i++)
// //     {
// //         facto[i] = (facto[i - 1]* i) % mod;
// //     }
// // }
// vector<ll> getdivisor(ll num)
// {
//     vector<ll> divisor;
//     for (ll i = 1; i * i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             divisor.push_back(i);
//             if (i != num / i)
//             {
//                 divisor.push_back(num / i);
//             }
//         }
//     }
//     sort(divisor.begin(), divisor.end());
//     return divisor;
// }

// const int MAX = 1e6 + 9;
// int ar[MAX];
// void precom_number_of_divisor()
// {
//     for (int i = 1; i <= MAX; i++)
//     {
//         for (int j = i; j <= MAX; j += i)
//         {
//             ar[j]++;
//         }
//     }
// }
int main()
{
    op();
   
    return 0;
}