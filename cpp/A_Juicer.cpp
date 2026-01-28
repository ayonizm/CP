#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b, c;
    cin >> a >> b >> c;
    ll fy = 0;
    ll count = 0;
    for (ll i = 0; i < a; i++)
    {
        ll t;
        cin >> t;
        if(t<=b){
            fy += t;
        }
        if(fy>c){
            count++;
            fy = 0;
        }
    }
    // if(fy==0){
    //     cout << "0" << endl;
    //     return 0;
    // }
    // if(fy%c==0){
    // cout << (fy / c) -1<< endl;

    // }
    // else{
    // cout << fy / c<< endl;

    // }
    cout << count << endl;

    return 0;
}