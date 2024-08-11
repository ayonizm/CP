#include<stdio.h>
int main ()
{
   int n;
   scanf("%d",&n);
   for (int i = 0; i < n; i++)
   {
    int x;
    scanf("%d",&x);
    int ar[x];
    for (int j = 0; j < x; j++)
    {
        scanf("%d",&ar[j]);
    }
    printf("Case %d: %d\n",i+1,ar[(x/2)]);
    // if (ar[0]>ar[x-1])
    // {
    // for (int j = 0; j < x/2; j++)
    // {
    //     int temp = ar[j];
    //     ar[j]=ar[x-j-1];
    //     ar[x-j-1]=temp;

    // }
    // }
    
    
    // for (int m = 0; m < x; m++)
    // {
    //     printf("%d ",ar[m]);
    // }
    // printf("\n");
    
    
   }
   
   return 0;
}