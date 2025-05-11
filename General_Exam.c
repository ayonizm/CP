#include <stdio.h>
int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        int ar1[x];
        int ar2[y];
        for (int i = 0; i < x; i++)
        {
            scanf("%i", &ar1[i]);
        }
        for (int i = 0; i < x - 1; i++)
        {
            for (int j = i + 1; j < x; j++)
            {
                if (ar1[i] < ar1[j])
                {
                    int temp = ar1[i];
                    ar1[i] = ar1[j];
                    ar1[j] = temp;
                }
            }
        }
        for (int i = 0; i < y; i++)
        {
            scanf("%i", &ar2[i]);
        }
        for (int i = 0; i < y; i++)
        {
            printf("%i\n", ar1[ar2[i] - 1]);
        }
    }

    return 0;
}