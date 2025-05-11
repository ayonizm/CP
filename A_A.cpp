#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    ll f;
    ll r=2;
    while (1)
    {
        double e = pow(r,r);
        if(n%(ll)e==0.0){
            cout << r << endl;
            return 0;
        }
        if(n<e){
            cout << "-1" << endl;
            break;
        }
        r++;
    }
    
    return 0;
}