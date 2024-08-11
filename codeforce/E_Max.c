#include<stdio.h>
int main()
{
   int x,y;
   int low = 0;
   scanf("%d",&x);
   for (int i = 0; i < x; i++)
   {
    scanf("%d",&y);
    if (y>low)
    {
        low = y;
    }
    else{
        continue;
    }
    
   }
   printf("%d",low);
   return 0;
}