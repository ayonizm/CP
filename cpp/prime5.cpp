#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MAX 1000001
bool prime[MAX];
void primeg(){
    prime[0] = prime[1] = 1;
    for (long long int i = 2; i*i<= MAX; i++)
    {
        if(prime[i]==0){
            for (long long int j = i+i; j <=MAX; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    
}
int main(){
    op();
    primeg();
    int a;
    cin >> a;
    if(prime[a-1]){
        cout << "prime" << endl;
    }
    else{
        cout << "Not prime" << endl;
    }
    return 0;
}