#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    vector<ll> x;
    ll t;
    while (cin>>t)
    {
        x.push_back(t);
    }
    ll k = *max_element(x.begin(), x.end());
    for (int i = 0; i < x.size(); i++)
    {
        if(x[i]==k&&x[i+1]!=k){
            cout << i << endl;
            return 0;
        }
    }
    
    return 0;
}