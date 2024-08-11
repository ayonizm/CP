#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int ar[n];
   int count[7]={0};
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&ar[i]);
   }
   for (int i = 0; i < n; i++)
   {
    count[ar[i]]++;
   }
   for (int i = 0; i < 7; i++)
   {
    printf("%d - %d\n",i,count[i]);
   }
   
   return 0;
}