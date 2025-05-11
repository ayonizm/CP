#include<stdio.h>
int main ()
{
    int x;
   int par[5]={0};
   int impar[5]={0};
   int j = 0;
   int k = 0;
   for (int i = 0; i < 15; i++)
   {
    scanf("%d",&x);

    if (x%2==0)
    {
        par[j]=x;
        j++;
        if (j>4)
        {
            for (int m = 0; m < 5; m++)
            {
                printf("par[%d] = %d\n",m,par[m]);
            }
            j=0;
        }
        
    }
    else if (x%2!=0)
    {
        impar[k]=x;
        k++;
        if (k>4)
        {
            for (int m = 0; m < 5; m++)
            {
                printf("impar[%d] = %d\n",m,impar[m]);
            }
            k=0;
        }
    }
    
    
    
   }
    for (int i = 0; i <k; i++)
    {
      
        printf("impar[%d] = %d\n",i,impar[i]);
    }
    for (int i = 0; i <j; i++)
    {
      
        printf("par[%d] = %d\n",i,par[i]);
    }
   
   return 0;
}