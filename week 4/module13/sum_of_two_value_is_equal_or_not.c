#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int ans;
    int count = 0;
    scanf("%d", &ans);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j =i+ 1; j < n; i++)
        {
            if (ar[i] + ar[j] == ans)
            {
                printf("yes");
                // count++;
                break;
            }
        }
        // if (count>0)
        // {
        //     break;
        // }
        
    }

    return 0;
}