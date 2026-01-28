#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int

int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        ll la;
    cin >> la;
    vector<ll> x;

    for (int i = 0; i < la; i++)
    {
    ll t;
        cin >> t;
        x.push_back(t);
    }
    ll k = x[0];
    vector<ll> v;
    ll count = 1;
    for (int i = 1; i < la; i++)
    {
        if(x[i]==k){
            count++;
            if(count==2){

            v.push_back(x[i]);
            count = 0;
            k = x[i + 1];
            }
            
        }
    }
    cout << v.size() << endl;
    if(v.size()%2==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    }
    
    return 0;
}