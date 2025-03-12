#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
void primefactor(int n){
    while (n%2==0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    for (int i = 3; i*i <=n; i=i+2)
    {
        while (n%i==0)
        {
            cout << i << " ";
            n = n / i;
        }
        
    }
    if(n>2){
        cout << n << endl;
    }
}
int main(){
    op();
    int a = 325;
    primefactor(a);
    return 0;
}
