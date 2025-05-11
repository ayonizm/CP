#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    long long n;
    cin >> n;
    if(n==0){
        cout << "0" << endl;
        return 0;
    }
    if(n>0){
        
    cout << n / 10 << endl;
    }
    else{
        if(n%10==0){

           cout << n / 10 << endl;
        }
        else{
            cout << (n / 10 )-1<< endl;
            
        }
    }

    return 0;
}