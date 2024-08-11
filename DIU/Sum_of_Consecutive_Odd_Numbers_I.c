#include <stdio.h>
int main()
{
    int x, y;
    int min, max;
    int count = 0;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        max = x;
        min = y;
    }
    else if (x < y)
    {
        max = y;
        min = x;
    }
    for (int i = min + 1; i < max; i++)
    {
        if (i % 2 != 0)
        {
            count = count + i;
        }
    }
    printf("%d\n", count);

    return 0;
}