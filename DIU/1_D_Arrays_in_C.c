#include<stdio.h>
int main()
{
   int x;
   scanf("%d",&x);
   int ar[x];
   int count = 0;
   for (int i = 0; i < x; i++)
   {
    scanf("%d",&ar[i]);
    count = count + ar[i];
   }
   printf("%d\n",count);
   return 0;
}