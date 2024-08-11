#include<stdio.h>
int main ()
{
   long long int x,y;
   while (scanf("%lld %lld",&x,&y)!=EOF)
   {
    if (x>y)
    {
        printf("%lld\n",x-y);
    }
    else if (x<y)
    {
        printf("%lld\n",y-x);
    }
    else{
        printf("0\n");

    }
   }

   return 0;
}