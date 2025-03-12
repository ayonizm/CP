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
int sum = 0;
int solve(ll ar[], ll arr[],ll i, ll n)
{
    if (i == n)
    {
        return sum;
    }

    

    sum += (ar[i] * arr[i]);
    return solve(ar,arr, i + 1, n);
    
    
}
int main()
{
    op();
    ll n;
    cin >> n;
    
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(solve(ar, arr, 0, n)==0){
        Yes;
    }
    else{
        No;
    }
    

    return 0;
}