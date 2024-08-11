#include<stdio.h>
int main ()
{
   int n[1000];
   int v ;
   scanf("%d",&v);
   int j = 0;
   for (int i = 0; i < 1000; i++)
   {
    
    
    n[i]=j;
    j++;
    if (j>=v)
    {
        j = 0;
    }
    
    
   }
   for (int i = 0; i < 1000; i++)
   {
    printf("N[%d] = %d\n",i,n[i]);
   }
   
   return 0;
}