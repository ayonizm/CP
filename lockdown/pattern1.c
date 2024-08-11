#include <stdio.h>

int main()
{
    int n;
    int k = 1;
    scanf("%d", &n);
    int l = n - 1;

    // Upper pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = l; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        printf("\n");
        l--;
        k += 2;
    }

    // Lower inverted pyramid
    int k1 = 0;
    int nida = (n * 2) - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < nida; j++)
        {
            printf("*");
        }
        k1++;
        nida -= 2;
        printf("\n");
    }

    return 0;
}
