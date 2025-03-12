#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int prime(long long int n){
    
    int count = 0;
    for (long long int i = 1; i *i<=n; i++)
    {
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    op();
    int n;
    cin >> n;
    for (int i = 0; i <=n; i++)
    {
        
    if (prime(n))
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    }
    
    
    
    return 0;
}