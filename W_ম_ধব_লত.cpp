#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    vector<ll> x1;
    vector<ll> x2;
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i+=2)
    {
        x1.push_back(i);
    }
    for (int i = 2; i <= n; i+=2)
    {
        x2.push_back(i);
    }
    for(auto v:x2){
        cout << v << " ";
    }
    for(auto v:x1){
        cout << v << " ";
    }
    
    return 0;
}