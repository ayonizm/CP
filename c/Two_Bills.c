#include<stdio.h>
int main ()
{
   long long int n,m;

   while (scanf("%lld %lld",&n,&m)!=EOF)
   {
    int count = 0;
    int pcount = 0;
    if (n==0 || m==0)
    {
        break;
    }
    long long int dif = m-n;
    int ar[6]={2,5,10,20,50,100};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            int temp = ar[i]+ar[j];
            if (temp == dif)
            {
                count++;
            }
            else 
            {
                pcount++;
            }
            
        }
        
    }
    if (count>0)
    {
        printf("possible\n");
    }
    else{
        printf("impossible\n");
    }
   }
   
   return 0;
}