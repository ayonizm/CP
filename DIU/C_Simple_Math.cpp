#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b, c;
    cin >> a >> b >> c;
    ll mod = 998244353;
    ll a1, b1, c1;
    a1 = (a * (a + 1) / 2) % mod;
    b1 = (b * (b + 1) / 2) % mod;
    c1 = (c * (c + 1) / 2) % mod;
    ll ay = (a1 * b1 % mod) * c1 % mod;
    cout << ay;
    return 0;
}