#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int hello(long long int n){
    long long int count = 0;
    if(n<2){
        return 0;
    }
    for (long long int i = 2; i *i<=n; i++)
    {
        if(n%i==0){
        count++;
        if(n/i!=i){
            count++;
        }

        }
    }
    if(count>0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    op();
    long long int n;
    cin >> n;
    if(hello(n-2)){
        cout << "2" << " " << n - 2 << endl;
    }
    else{
        
    cout << "-1" << endl;
    }
    

    return 0;
}