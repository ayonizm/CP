#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
     int test,n,m,l,vai;
    cin>>test;
    int i=1;
    while(test--)
    {
        cin>>n>>m>>l;
        vai=(m+l)%n;
        if(vai!=0){
            cout<<"Case "<<i<<": "<<vai<<endl;
        }
        else {
            cout<<"Case "<<i<<": "<<n<<endl;
        }
        i++;
    }
    
    return 0;
}