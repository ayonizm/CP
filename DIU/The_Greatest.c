#include<stdio.h>
int main()
{
   int x[3];
   for (int i = 0; i < 3; i++)
   {
    scanf("%d",&x[i]);
   }
   int y = x[0];
   for (int i = 0; i <3; i++)
   {
    if (x[i]>y)
    {
        y = x[i];
    }
    
   }
   printf("%d eh o maior\n",y);
   

   return 0;
}