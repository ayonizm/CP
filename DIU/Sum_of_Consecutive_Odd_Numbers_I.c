#include <stdio.h>
int main()
{

    int a, b, min, max, sum = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        min = a;
        max = b;
    }

    for (int i = min + 1; i < max; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
        printf("%d\n", sum);

    return 0;
}