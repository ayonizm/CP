#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 1 + i; j < n; j++)
            {
                if (ar[i] > ar[j])
                {
                    int temp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            printf("%04d\n", ar[i]);
        }
    }

    return 0;
}