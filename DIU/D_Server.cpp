#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a;
    cin >> a;
    if(a%24==0){
        cout << a / 24 << endl;
        return 0;
    }
    a = a / 24;
    a++;
    cout << a << endl;
    return 0;
}