#include <stdio.h>

int main()
{
    int x, y;

    while (scanf("%d %d", &x, &y) != EOF)
    {

        int ar[x][y];

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                scanf("%d", &ar[i][j]);
            }
        }

        int result[x][y];
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                result[i][j] = ar[i][j];
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (ar[i][j] == 0)
                {
                    int sum = 0;

                    if (j - 1 >= 0)
                    {
                        sum += ar[i][j - 1];
                    }

                    if (j + 1 < y)
                    {
                        sum += ar[i][j + 1];
                    }

                    if (i - 1 >= 0)
                    {
                        sum += ar[i - 1][j];
                    }

                    if (i + 1 < x)
                    {
                        sum += ar[i + 1][j];
                    }

                    result[i][j] = sum;
                }
                else if (ar[i][j] == 1)
                {
                    result[i][j] = 9;
                }
            }
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                printf("%d", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
