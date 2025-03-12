#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
ll MX = 1e18-1;
int main(){
    op();
    ll a;
    cin >> a;
    ll k = 1;
    bool oi = true;
    while (a--)
    {
        ll p;
        cin >> p;
        k = k * p;
        if(k>MX){
           oi= false;
        }
    }
    if(oi){
        cout << k << endl;
    }
    else{
        cout << "-1" << endl;
    }
    
    

    return 0;
}