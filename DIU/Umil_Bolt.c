#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        float ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%f", &ar[i]);
        }
        float small = ar[0];
        for (int i = 0; i < n; i++)
        {
            if (ar[i] < small)
            {
                small = ar[i];
            }
        }
        printf("%.2f\n", small);
    }

    return 0;
}