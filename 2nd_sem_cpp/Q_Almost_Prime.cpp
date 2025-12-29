#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
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
int main(){
    op();
    sieve();
    ll p;
    cin >> p;
    if(flag[p]){
        cout<<p<<endl;
        return 0;
    }
    ll k;
    ll o;
    for (int i = 0; ; i++)
    {
        if(prime[i]>p){
            o = prime[i];
            k = prime[i - 1];
            break;
        }
    }
    ll w = abs(p - o);
    ll c = abs(p - k);
    if(w<c){
        cout << o << endl;
    }
    else if(w>c){
        cout << k << endl;
    }
    else{
        
        cout << k << endl;
    }

    return 0;
}