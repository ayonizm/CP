#include<stdio.h>
int main ()
{
   int n;
   scanf("%d",&n);
   int ar[n];
   int count[2001]={0};
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&ar[i]);
   }
   for (int i = 0; i < n; i++)
   {
    count[ar[i]]++;
   }
   for (int i = 0; i <= 2000; i++)
   {
    if (count[i]>0)
    {
        printf("%d aparece %d vez(es)\n",i,count[i]);
    }
    
   }
   return 0;
}