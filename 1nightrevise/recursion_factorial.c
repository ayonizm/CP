#include<stdio.h>
int factorial(int x){
    int f;
    if (x==0 || x==1)
    {
        return 1;
    }
    else{
        f = x * factorial(x-1);
        return f;
    }
    
}
int main()
{
   int x;
   scanf("%d",&x);
   printf("%d",factorial(x));
   return 0;
}