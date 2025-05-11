#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll flag = 1;
    for (int i = 0; i < 8; i++)
    {
        ll t;
        cin >> t;
        if(t<60){
            flag = 0;
        }
    }
    if(flag){
        cout << "Eligible" << endl;
    }
    else{
        cout << "Not Eligible" << endl;
    }
    return 0;
}