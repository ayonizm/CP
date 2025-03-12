#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll vai(ll n) { 
  if (n == 0) { 
    return 1; 
  } else { 
    return n * vai(n - 1); 
  }
}
ll gc(ll a,ll b){
 while(a!=b){
 if(a>b){
 a-=b;
 }else{
 b-=a; 
 }
 }
 return a;
}
int main(){
    ll n,m;
    cin>>n>>m;
    ll f=vai(n);
    ll r =vai(m);
    ll k = gc(f, r);
    cout<<k<<endl;
    return 0;
}