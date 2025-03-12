#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    ll k;
    ll p;
    while (1)
    {
    cin >> k;
    if(k>n){
        p = k;
        break;
        }
        
    }
    ll sum = 0;
    ll count = 0;
    while (sum<=k)
    {
        sum = sum + n;
        count++;
        n++;
    }
    cout << count << endl;

    return 0;
}