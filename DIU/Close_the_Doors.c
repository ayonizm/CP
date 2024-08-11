#include<stdio.h>
int main()
{
   int x;
   int count = 0;
   while (scanf("%d",&x)!=EOF)
   {
    if (x==0)
    {
        break;
    }
    
    count++;
   }
   for (int i = 1; i < count; i++)
   {
    printf("1\n");
   }
   printf("1 %d",count);
   return 0;
}