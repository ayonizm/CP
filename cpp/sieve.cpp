#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int N = 1000000000;
bool sieve[1000000000];
void create(){
    for (int i = 2; i <= N; i++)
    {
        sieve[i] = 0;
    }
    for (int i = 2; i*i <= N; i++)
    {
        if(sieve[i]==0){
            for (int j = i+i; j <=N; j=j+i)
            {
                sieve[j] = 1;
            }
            
        }
    }
    
}
int main(){
    op();
    create();
    long long int n;
    cin >> n;
    cout << sieve[n] << endl;

    return 0;
}