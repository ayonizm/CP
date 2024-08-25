#include<stdio.h>
int main()
{
   int x,y ;
   int pos=0,neg=0,even=0,odd=0;
   scanf("%d",&x);
   for (int i = 0; i < x; i++)
   {
    scanf("%d",&y);
    if (y>0)
    {
        pos++;
    }
    else if (y<0)
    {
        neg++;
    }
    if (y%2==0)
    {
        even++;
    }
    else if (y%2!=0)
    {
        odd++;
    }
    
    
   }
   printf("Even: %d\n",even);
   printf("Odd: %d\n",odd);
   printf("Positive: %d\n",pos);
   printf("Negative: %d\n",neg);
   return 0;
}