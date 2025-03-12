#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
#define MAX 10000000
bool flag[MAX + 1];
ll prime[MAX + 5];
ll total = 0;
void sieve()
{
    flag[0] = false;
    flag[1] = false;
    for (ll i = 2; i <= MAX; i++)
    {
        flag[i] = true;
    }
    ll f = sqrt(MAX);
    for (ll i = 0; i <= f; i++)
    {
        if (flag[i])
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                flag[j] = false;
            }
        }
    }
    for (ll i = 2; i <= MAX; i++)
    {
        if (flag[i])
        {
            prime[total++] = i;
        }
    }
}
vector<ll> kk;
void segsieve(ll l, ll r)
{
    if (l == 1)
    {
        l++;
    }
    ll mx = r - l + 1;
    bool ar[mx + 1];
    for (ll i = 0; i <= mx; i++)
    {
        ar[i] = true;
    }
    for (ll k = 0; prime[k] * prime[k] <= r; k++)
    {
        ll v = prime[k];
        ll i = (l / v) * v;
        if (i < l)
        {
            i += v;
        }
        if (i == v)
        {
            i += v;
        }
        for (; i <= r; i += v)
        {
            ar[i - l] = false;
        }
    }
    for (ll i = 0; i < mx; i++)
    {
        if (ar[i])
        {
            kk.push_back(i + l);
        }
    }
}

int main()
{
    op();
    sieve();
    ll a, b;
    
    cin >> a >> b;
    segsieve(a, b);
    ll count = 0;
    if(a<=2&&b>=2){
       for (int i = 1; i < kk.size(); i++)
       {
        if(flag[kk[i]-2]){
            count++;
        }
       }
       
        
    }
    
    for (ll i = 0; i < kk.size(); i++)
    {
        if(kk[i]==2){
           
            continue;
        }
        if (flag[kk[i]+2]&&(kk[i]+2)<=b){
            count++;
        }
        
        
    }
    
    cout << count << endl;
    return 0;
}