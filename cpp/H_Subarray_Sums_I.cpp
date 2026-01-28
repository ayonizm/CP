#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int main()
{
    op();
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll a = 0;
    ll b = 0;
    ll sum = 0;
    ll ct = 0;
   for (ll i = 0; i < n; i++)
   {
    if(sum<q){
        sum += ar[i];
        
    }
    
    else if(sum>q){
        while(sum>q){
            sum -= ar[b++];
        }
    }
    
    if (sum == q)
    {
        ct++;
        sum -= ar[b++];
    }
   }
   

    cout << ct << endl;

    return 0;
}