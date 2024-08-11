#include<stdio.h>
int main()
{
   int x,temp;
   scanf("%d",&x);
   int ar[x];
   for (int i = 0; i <x; i++)
   {
    scanf("%d",&ar[i]);
   }
   for (int i = 0; i < x/2; i++)
   {
    temp = ar[i];
    ar[i]=ar[x-i-1];
    ar[x-i-1]=temp;
   }
   for (int i = 0; i < x; i++)
   {
    printf("%d ",ar[i]);
   }
   
   
   return 0;
}