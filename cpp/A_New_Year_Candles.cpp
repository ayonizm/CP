#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
     int a,b; 
     cin>>a>>b;
    
    int x = a;
    while(a>=b)
    {
        x = x + (a/b);
        a = (a/b) + (a%b);
    }
    cout<<x<<endl;
    return 0;
}