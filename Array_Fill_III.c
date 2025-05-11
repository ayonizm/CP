#include<stdio.h>
int main()
{
   double n;
   scanf("%lf",&n);
   double ar[100];
   for (int i = 0; i < 100; i++)
   {
    ar[i]=n;
    n= n/2;
   }
   for (int i = 0; i < 100; i++)
   {
    printf("N[%d] = %.4lf\n",i,ar[i]);
   }
   
   return 0;
}