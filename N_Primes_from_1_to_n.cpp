#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
// int prime(long long int n){
    
//     int count = 0;
//     for (long long int i = 1; i *i<=n; i++)
//     {
//         if(n%i==0){
//             count++;
//             if((n/i)!=i){
//                 count++;
//             }
//         }
//     }
//     if(count==2){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
int main(){
    op();
    int n;
    cin >> n;
    for (int i = 2; i <=10; i++)
    {
        int count = 0;
    for (long long int j = 1; j *j<=i; j++)
    {
        if(i%j==0){
            count++;
            if((i/j)!=j){
                count++;
            }
        }
    }
    if(count==2){
        cout << i << " ";
    }

    }
    
    
    
    return 0;
}