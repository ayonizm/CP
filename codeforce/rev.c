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
   int tem;
   for (int i = 0; i < n/2; i++)
   {
    tem = ar[i];
    ar[i]= ar[n-i-1];
    ar[n-i-1]=tem;

   }
   for (int i = 0; i < n; i++)
   {
    printf("%d ",ar[i]);
   }
   
return 0;
}