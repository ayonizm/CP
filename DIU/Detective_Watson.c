#include<stdio.h>
int main ()
{
   int n;
   while (scanf("%d",&n)!=EOF)
   {
   int ar[n];
    if (n==0)
    {
        break;
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int big = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i]>big)
        {
            big = ar[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i]==big)
        {
            ar[i]=0;
        }
        
    }
    int big1 = ar[0];
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]>big1)
        {
            big1 = ar[i];
            
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]==big1)
        {
            count++;
            break;
        }
        else{
            count++;
        }
        
        
    }
    printf("%d\n",count);
   }
   
   return 0;
}