#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
ll SOD(ll n) {
    ll sod = 1;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            ll pow = 1;
            while (n % i == 0) {
                pow *= i; // p^e
                n /= i;
            }
            pow *= i; // p^e+1
            sod *= (pow - 1) / (i - 1); //(p^e+1)-1 / p-1
        }
    }
    if (n > 1) sod *= (n + 1);
    return sod;
}
 int main()
{
    op();
    

   ll n; 
   cin>>n;
    // cout << SOD(n) << endl;
   ll l=0,
   m=1;
   while(n>1){
    l+=m;
    n/=2;
    m*=2;
  }
  l+=m;
  cout<<l<<endl;
  
    return 0;
}