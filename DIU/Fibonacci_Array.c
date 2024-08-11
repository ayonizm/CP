#include<stdio.h>
int main ()
{
   int n;
   scanf("%d",&n);
   long long int ar[n];
   ar[0]=0;
   ar[1]=1;
   for (int i = 0; i < n; i++)
   {
    int x ;
    scanf("%d",&x);
    if (x==0)
    {
        printf("Fib(0) = 0\n");
        continue;
    }
    if (x==1)
    {
        printf("Fib(1) = 1\n");
        continue;
    }

    for (int j = 2; j <=x ; j++)
    {
         ar[j] = ar[j-2]+ar[j-1];
        
    }
    printf("Fib(%d) = %lld\n",x,ar[x]);
   }
   
   
   return 0;
}