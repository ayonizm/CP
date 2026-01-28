#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int isprime(int n){
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    op();
    int a;
    cin >> a;
    if(isprime(a)){
        cout << "prime" << endl;
    }
    else{
        cout << "not prime" << endl;
    }
    return 0;
}