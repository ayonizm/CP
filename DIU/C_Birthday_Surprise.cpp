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
    ll n;
    cin >> n;
    int ar[n + 6];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    // cout << ar[1];
    int pre[n + 1];
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i-1] + ar[i];
       
        
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << pre[i] << endl;
    // }
    ll p;
    cin>>p;
    ll ct = 0;
    while (p--)
    {
        ll a, b;
        cin >> a >> b;
        ll t = pre[b] - pre[a - 1];
        if(flag[t]){
            ct++;
        }
    }
    if(ct==0){
        cout << "Adnan bhai, Priyom dada, Shuvo bhai will forever be single!" << endl;
    }
    else if(ct==1){

        cout << "Sokina Khatun will be very happy!" << endl;
    }
    else if(ct==2){
         cout << "Sokina Khatun will be very very happy!" << endl;
    }
    else{

         cout << "Sokina Khatun will be very very very happy!" << endl;
    }

    return 0;
}