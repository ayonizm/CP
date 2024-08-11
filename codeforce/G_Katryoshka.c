#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a<b && a<c)
    {
      printf("%lld",a);
    }
    else if(b<c && b<a)
    {
        long long int d=a-b; long long int e=c-b;
        if(d/2<=e)
         { long long int f=d/2;
         printf("%lld",b+f);}
        else {printf("%lld",b+e);}  
     }
    
    else {printf("%lld",c);}
    

    return 0;
}