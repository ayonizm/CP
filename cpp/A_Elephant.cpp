#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    if(n==1||n==2||n==3||n==4||n==5){
        cout << "1" << endl;
    }
    else if(n%5==0){
        cout << (n / 5)<< endl;
    }
    else{
        cout << (n / 5)+1<< endl;
        
    }
    return 0;
}