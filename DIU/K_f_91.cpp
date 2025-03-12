#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int yo(int p){
    if((p >= 101)){
        return (p - 10);
    }
    else{
        return 91;
    }
}
int main(){
    op();
    int n;
    while(cin>>n){
        if(n==0){
            break;
        }
        cout << "f91(" << n << ") = " << yo(n) << endl;
       
    }
    return 0;
}