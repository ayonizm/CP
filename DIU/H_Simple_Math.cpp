#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long a, b, c;
       cin >> a >> b >> c;
     long long int mod = 998244353;
    long long a1, b1, c1;
       a1 = (a * (a + 1) / 2) % mod;
    b1 = (b * (b + 1) / 2) % mod;
    c1 = (c * (c + 1) / 2) %  mod;
    // cout <<a1<< " "<< b1 << " " << c1;
    long long ans = (a1 * b1 % mod) * c1 % mod;
    cout << ans << endl;
    return 0;
}