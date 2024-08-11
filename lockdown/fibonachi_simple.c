#include<stdio.h>
int main()
{
   int n,sum = 0;
   scanf("%d",&n);
   int x = 0;
   int y = 1;
   for (int i = 0; i < n-2; i++){
      int z = x + y;
      sum = sum + z;
      x = y;
      y = z;
   }
   printf("%d",sum+1);
   return 0;
}