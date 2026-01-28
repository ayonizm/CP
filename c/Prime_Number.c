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
    for (int i = 0; i < n; i++)
    {
        int number = 0;
        for (int j = 1; j <= ar[i]; j++)
        {
            if (ar[i] % j == 0)
            {
                number++;
            }
        }
        if (number == 2)
        {
            printf("%d eh primo\n", ar[i]);
        }
        else
        {
            printf("%d nao eh primo\n",ar[i]);
        }
    }

    return 0;
}