#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&ar[i]);
   }
   int temp;
   for (int i = 0; i < n/2; i++)
   {
    temp = ar[i];
    ar[i] = ar[n-i-1];
    ar[n-i-1] = temp;
   }
   
   for (int i = 0; i < n; i++)
   {
    printf("%d ",ar[i]);
   }
   
   return 0;
}