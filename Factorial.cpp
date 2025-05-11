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
void solve(){
    ll n;
    cin >> n;
    ll p = 1;
    ll ct = 0;
    for (int i = 1; ; i++)
    {
        ct++;
        p =p* i;
        if(p==n){
            break;
        }
    }
    cout << ct << endl;
}
int main(){
    op();
    
    solve();

    return 0;
}