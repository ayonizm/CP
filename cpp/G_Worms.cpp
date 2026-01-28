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
int bin(int ar[],int lo,int hi,int t){
    int mid;
    while (lo<=hi)
    {
        mid = (lo + (hi - lo) / 2);
        if(ar[mid>=t]){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return hi;
}
void solve(){
    

}
int main(){
    op();
    ll n;
    cin >> n;
    vector<int> x;
    x[0] = 0;
    for (int i = 1; i <=n; i++)
    {
        
    }
    
    while (n--)
    {
        solve();
    }
    

    return 0;
}