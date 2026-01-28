#include<stdio.h>
int main ()
{
   long long int x,y;
   int m=1;
   scanf("%lld %lld",&x,&y);
   long long int num = y/x;
   long long int l = x;
   for (int i = 1; i <=num ; i++)
   {
    printf("%d",m);
    for (int j = m+1; j <=l ; j++)
    {
        printf(" %d",j);
    }
        printf("\n");
    m+=x;
    l+=x;
   
   }
   
   return 0;
}