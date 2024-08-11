#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int y = x / 2;
    int a, b, c, d;
    a = y;
    b = 1;
    c = 1;
    d = y * 2 - 1;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < b; j++)
        {
            printf("*");
        }
        a--;
        b = b + 2;
        printf("\n");
    }

    for (int i = 0; i < x; i++)
    {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < d; j++)
        {
            printf("*");
        }
        c++;
        d = d - 2;
        printf("\n");
    }

    return 0;
}