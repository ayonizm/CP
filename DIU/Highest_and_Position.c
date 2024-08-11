#include <stdio.h>
int main()
{
    int ar[100];
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &ar[i]);
    }
    int big = ar[0];
    int pos;
    for (int i = 0; i < 100; i++)
    {
        if (ar[i]>big)
        {
            big = ar[i];
        }
        if (ar[i]==big)
        {
           pos = i+1; 
        }
        
        
    }
    printf("%d\n",big);
    printf("%d\n",pos);
    return 0;
}