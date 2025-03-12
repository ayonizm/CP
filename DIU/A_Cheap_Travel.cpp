#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    if(m*a <= b)
    { 
        cout<<n*a<<"\n";
    }
    else{
        cout<<(n/m)*b + min ((n%m)*a,b);
    }
    return 0;
}