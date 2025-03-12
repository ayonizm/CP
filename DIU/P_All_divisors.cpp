#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
vector<ll>getdivisor(ll num){
    vector<ll> divisor;
    for (ll i = 1; i*i <=num; i++)
    {
        if(num%i==0){
            divisor.push_back(i);
            if(i!=num/i){
                divisor.push_back(num / i);
            }
        }
    }
    sort(divisor.begin(), divisor.end());
    return divisor;
}
int main(){
    op();
    ll n;
    cin >> n;
    vector<ll> k=getdivisor(n);
   
    for(auto v:k){
        cout << v << " ";
    }
    return 0;
}