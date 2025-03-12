#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define MAX 1000000
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
    for (int i = 0; i <=MAX; i++)
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
    cin >> n;
    while (n--)
    {
        ll t;
        cin >> t;
            int r = sqrt(t);
            double p = sqrt(t);
            double a = p - r;
            if(a==0.0&&flag[r]){
                cout << "YES" << endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        
    }
    return 0;
}