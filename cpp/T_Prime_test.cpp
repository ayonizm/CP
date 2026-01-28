#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
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
        cout << "Prime" << endl;
    }
    else{
        cout << "Not prime" << endl;
    }
    
    return 0;
}