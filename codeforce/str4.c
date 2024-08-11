#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int count[5] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = ar[i];
        count[val]++;
    //    if (ar[i]==0)
    //    {
    //     count[ar[i]]++;
    //    }
    //    else if (ar[i]==1)
    //    {
    //     count[ar[i]]++;
    //    }
    //    else if (ar[i]==2)
    //    {
    //     count[ar[i]]++;
    //    }
    //    else if (ar[i]==3)
    //    {
    //     count[ar[i]]++;
    //    }
    //    else if (ar[i]==4)
    //    {
    //     count[ar[i]]++;
    //    }
       
       
        
    }
    for (int i = 0; i < n; i++)
    {
    printf("%d = %d\n",i,count[i]);
        
    }
    
    // printf("0 = %d\n",count[0]);
    // printf("1 = %d\n",count[1]);
    // printf("2 = %d\n",count[2]);
    // printf("3 = %d\n",count[3]);
    // printf("4 = %d\n",count[4]);
    
    
    return 0;
}