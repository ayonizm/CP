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
    while (n--)
    {
        ll temp;
        cin >> temp;
        if(temp%2==0){
            x1.push_back(temp);
        }
        else{
            x2.push_back(temp);
        }
    }
    sort(x1.begin(), x1.end(),greater<>());
    sort(x2.begin(), x2.end());
    for(auto v:x2){
        cout << v << " ";
    }
    for(auto v:x1){
        cout << v << " ";
    }


    return 0;
}