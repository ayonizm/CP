#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    set<ll> x;
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll t;
        cin>>t;
        x.insert(t);
    }
    ll a, b;
    ll count1 = 0;
    // ll count2 = x.size();

    for(auto v:x){
        if(count1==0){
            a = v;
        }
        if(count1==x.size()-1){
            b = v;
        }
        count1++;
        
    }
    // cout << a <<" " <<b << endl;
    cout << b - a << endl;

    return 0;
}