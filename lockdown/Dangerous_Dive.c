#include <stdio.h>
int main()
{
    int n, r;
    while (scanf("%d %d", &n, &r) != EOF)
    {
        int ar[r];
        int count[n];
        for (int i = 0; i < n; i++)
        {
            count[i] = 0;
        }

        for (int i = 0; i < r; i++)
        {
            scanf("%d", &ar[i]);
        }

        // if (n == r)
        // {
        //     printf("*");

        // }
        int y = 0;
        if (n > r)
        {
            for (int j = 0; j < r; j++)
            {
                count[ar[j]]++;
            }
            for (int i = 0; i < n; i++)
            {
                if (count[i] > 0)
                {
                    y++;
                    printf("%d ", i + 1);
                }
            }
        }
        if (y == 0)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}