#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    ll sum = a + b + c + d + e;
    if(sum==0){
        cout << "-1" << endl;
        return 0;
    }
    if(sum%5==0){
        cout << sum / 5 << endl;
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
}