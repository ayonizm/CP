#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b, x;
    cin >> a >> b >> x;
    ll count = 0;
    while (x>0)
    {
        if(count%2==0){
            x = x - (__gcd(a, x));
            count++;
        }
        else{
             x = x - (__gcd(b, x));
            count++;
        }
    }
    if(count%2==0){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
    return 0;
}