#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int low = ar[0];
    int count;
    for (int i = 1; i < n; i++)
    {

        if (low>ar[i])
        {
            low=ar[i];
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i]==low)
        {
           count=i+1;
           break; 
        }
        
    }
    printf("%d %d",low,count);
    
    
    return 0;
}