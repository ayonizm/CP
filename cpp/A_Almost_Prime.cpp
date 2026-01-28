#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define MAX 10000000
bool flag[MAX + 1];
ll prime[MAX + 5];
ll total = 0;
void sieve(){
    flag[0] = false;
    flag[1] = false;
    for (ll i = 2; i <=MAX ; i++)
    {
        flag[i] = true;
    }
    ll f = sqrt(MAX);
    for (ll i = 0; i<=f; i++)
    {
        if(flag[i]){
            for (ll j = i*i; j <=MAX; j+=i)
            {
                flag[j] = false;
            }
        }
    }
    for (ll i = 2; i <=MAX; i++)
    {
        if(flag[i]){
            prime[total++] = i;
        }
    }
}
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
    sieve();
    ll n;
    cin >> n;
    ll po = 0;
    for (int j = 1; j <=n; j++)
    {
        
    set<ll> k = primefactor(j);
    vector<ll> p;
    for(auto v:k){
        p.push_back(v);
    }
    ll c = 0;
    for (ll i = 0; i < p.size(); i++)
    {
        if(flag[p[i]]){
            c++;
        }
    }
    if(c==2){
        po++;
    }
    }
    cout << po << endl;

    return 0;
}