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
bool solve(ll s,ll k){
    if(s==k){
        return true;
    }
    else if(s>k){
        return false;
    }
    else{
        return solve(s * 10, k) || solve(s * 20, k);
    }

}
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        ll k;
        cin >> k;
        if(solve(1,k)){
            YES;
        }
        else{
            NO;
        }
    }
    

    return 0;
}