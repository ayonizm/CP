#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int x,y;
    while (scanf("%lld %lld",&x,&y)!=EOF)
    {
     if (x>y)
     {
        printf("%lld\n",x-y);
     }
     else if (x<y)
     {
        printf("%lld\n",y-x);
     }
     else{
        printf("0\n");

     }
    }
    return 0;
}