#include <stdio.h>
int main()
{
    int x;
    int k = 0;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        for (int j = x; j > k; j--)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }

    return 0;
}