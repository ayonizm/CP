#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
/*********************we fell in love in october****************** */
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        ll k;
        cin >> k;
        ll c1 = 0;
        ll c2 = 0;
        while (k%2==0)
        {
            k = k / 2;
            c1++;
        }
        while (k%3==0)
        {
            k = k / 3;
            c2++;
        }
        if(k==1&&c1<=c2){
            ll p = (2 * c2) - c1;
            cout << p << endl;
        }
        else{
            cout << -1 << endl;
        }
        
        

    }
    
    return 0;
}