#include<stdio.h>
int main ()
{
   int x;
   scanf("%d",&x);
   float n;
   for (int i = 0; i < x; i++)
   {
    int count = 0;
    scanf("%f",&n);
    while (n>1.00)
    {
        n = n/2;
        count++;
    }
    printf("%d dias\n",count);
   }
   
   return 0;
}