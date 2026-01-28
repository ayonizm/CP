#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int t,x,f;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x;
        if(x%2==0)
        {
        for(int j=0;j<x;j+=2)
        {
            cout<<1;
        }
        }
        else
        {
            cout<<7;
            for(int k=0;k<x-3;k+=2)
            {
                cout<<1;
            }
        }
        cout<<endl;
    }
    return 0;
}