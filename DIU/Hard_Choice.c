#include <stdio.h>
#include <string.h>
int main()
{
    int x1, y1, z1;
    int x2, y2, z2;
    scanf("%d %d %d", &x1, &y1, &z1);

    scanf("%d %d %d", &x2, &y2, &z2);
    int sum = 0;
    if (x1 < x2)
    {
        sum = sum + (x2 - x1);
    }
    if (y1 < y2)
    {
        sum = sum + (y2 - y1);
    }
    if (z1 < z2)
    {
        sum = sum + (z2 - z1);
    }

    printf("%d\n", sum);

    return 0;
}