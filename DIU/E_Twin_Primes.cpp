#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define MAX 20000000
bool flag[MAX + 5];
ll prime[MAX + 5];
ll total = 0;
void sieve(){
    flag[0] = false;
    flag[1] = false;
    for (ll i = 2; i <=MAX; i++)
    {
        flag[i] = true;
    }
    ll sqr = sqrt(MAX);
    for (ll i = 0; i <=sqr ; i++)
    {
        if(flag[i]==true){
            for (ll j = i*i; j <=MAX; j+=i)
            {
                flag[j] = false;
            }
        }
    }
    for (ll i = 0; i <=MAX; i++)
    {
        if(flag[i]){
            prime[total++] = i;
        }
    }
}
int main(){
    op();
    sieve();
    ll n;
    vector<pair<ll, ll>> x;
    for (ll i = 0; i < MAX; i++)
    {
        if(flag[prime[i]+2]){
            x.push_back({prime[i], prime[i] + 2});
        }
    }
    while (cin>>n)
    {
        cout << "(" << x[n - 1].first << ", " << x[n - 1].second << ")" << endl;
    }
    
    return 0;
}