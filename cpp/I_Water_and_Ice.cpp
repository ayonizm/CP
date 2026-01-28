#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a;
    cin >> a;
    if(a<=0){
        cout << "Ice" << endl;
    }
    else{
        cout << "Water" << endl;
    }
    return 0;
}