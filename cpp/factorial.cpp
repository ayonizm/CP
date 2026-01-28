#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
const ll MOD = 1e9 + 7;

int main(){
    op();
    ll a;
    cin >> a;
    ll fac = 1;
    for (int i = 1; i <= a; i++)
    {
        fac = ((fac % MOD) * (i % MOD)) % MOD;
    }
    cout << fac << endl;
    
    return 0;
}