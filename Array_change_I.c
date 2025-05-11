#include<stdio.h>
int main ()
{
   int n = 20;
   int ar[n];
   for (int  i = 0; i < n; i++)
   {
    scanf("%d",&ar[i]);
   }
   for (int i = 0; i < n/2; i++)
   {
    int temp = ar[i];
    ar[i]=ar[n-i-1];
    ar[n-i-1]=temp;
   }
   for (int i = 0; i < n; i++)
   {
    printf("N[%d] = %d\n",i,ar[i]);
   }
   
   
   
   return 0;
}