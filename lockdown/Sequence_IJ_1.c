#include<stdio.h>
int main()
{
    int k = 1;
    int l = 60;
   for (int i = 0; i < 13; i++)
   {
    printf("I=%d J=%d\n",k,l);
    k = k + 3;
    l = l - 5;
   }
   
   return 0;
}