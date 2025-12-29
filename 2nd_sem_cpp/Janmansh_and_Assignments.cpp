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
    int p;
    cin >> p;
    p = p + 3;
    if(p>10){
        No;
    }
    else{
        Yes;
    }
}
int main(){
    op();
    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }
    

    return 0;
}