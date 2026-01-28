#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int N = 1000000;
bool sieve[1000000];
void create(){
    for (int i = 2; i <= N; i++)
    {
        sieve[i] = true;
    }
    for (int i = 2; i*i <= N; i++)
    {
        if(sieve[i]==true){
            for (int j = i*i; j <=N; j=j+i)
            {
                sieve[j] = false;
            }
            
        }
    }
    
}
int main(){
    op();
    create();

    
    return 0;
}