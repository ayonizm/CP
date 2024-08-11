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
    int target;
    int val = 0;
    scanf("%d", &target);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((ar[i] + ar[j]) == target)
            {
                val = 1;
            }
        }
    }
    if (val == 1)
    {
        printf("paisi mamaaaaaaaaaaaaaa\n");
    }
    else if (val == 0)
    {
        printf("pai nai\n");
    }

    return 0;
}