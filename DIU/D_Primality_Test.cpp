#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
// #define MAX 1000001
// bool prime[MAX];
// void sieve(){
//     prime[0] = prime[1] = 1;
//     for (ll i = 2; i*i<= MAX; i++)
//     {
//         if(prime[i]==0){
//             for (ll j = i+i; j <=MAX; j+=i)
//             {
//                 prime[j] = 1;
//             }
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


// vector<ll> primefactor(ll n){
//     vector<ll> y;
//     while (n%2==0)
//     {
        
//         // cout << 2 << " ";
//         y.push_back(2);
//         n = n / 2;

//     }
//     for (int i = 3; i*i <=n; i=i+2)
//     {
//         while (n%i==0)
//         {
//             // cout << i << " ";
//             y.push_back(i);
//             n = n / i;
//         }
        
//     }
//     if(n>2){
//         // cout << n << endl;
//         y.push_back(n);
//     }
//     return y;
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
// ll SOD(ll n) {
//     ll sod = 1;
//     for (ll i = 2; i * i <= n; ++i) {
//         if (n % i == 0) {
//             ll pow = 1;
//             while (n % i == 0) {
//                 pow *= i; // p^e
//                 n /= i;
//             }
//             pow *= i; // p^e+1
//             sod *= (pow - 1) / (i - 1); //(p^e+1)-1 / p-1
//         }
//     }
//     if (n > 1) sod *= (n + 1);
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
// ll nod(ll n){
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
 int main()
{
    op();
    

    return 0;
}