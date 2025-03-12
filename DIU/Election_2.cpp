#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b, c;
    cin >> a >> b >> c;
    ll sum = b + c;
    ll t = a - sum;
    ll m1 = min(b, c);
    ll m2 = max(b, c);
    m1=m1+t;
    if(m1>m2){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
    return 0;
}