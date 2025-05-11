#include<stdio.h>
int main()
{
   int n,m;
   while (scanf("%d %d",&n,&m)!=EOF)
   {
    if (n==0 || m==0)
    {
        break;
    }
    int ar[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&ar[i]);
    }
    int count[n+1];
    for (int i = 0; i <= n; i++)
    {
        count[i]=0;
    }
    

    for (int i = 0; i < m-1; i++)
    {
        for (int j = 1 + i; j < m; j++)
        {
            if (ar[i]==ar[j])
            {
                
                count[ar[i]]++;
                break;
            }
            
        }
        
    }
    int yo = 0;
    for (int i = 0; i <= n; i++)
    {
        if (count[i]>0)
        {
            yo++;
        }
         
    }
    printf("%d\n",yo);
   }
   
   return 0;
}