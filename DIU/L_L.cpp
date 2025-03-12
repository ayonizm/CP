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
void solve(ll ar[],ll i,ll n,ll tar){
    if(i==n){
        return;
    }

    if(ar[i]!=tar){
        cout << ar[i] << " ";
    }
    
    solve(ar, i + 1, n, tar);



}
int main(){
    op();
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    ll ar[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    solve(ar, 0, n, m);

    return 0;
}