#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    int ar1[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar1[i]);
    }
    scanf("%d", &y);
    int ar2[y];
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &ar2[i]);
    }

    int ar[x + y];

    for (int i = 0; i < x; i++)
    {
        ar[i] = ar1[i];
    }

    for (int i = 0; i < y; i++)
    {
        ar[x+i] = ar2[i];//key point
    }

    for (int i = 0; i < x + y; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}