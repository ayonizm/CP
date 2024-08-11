#include <stdio.h>
void as(int x, int y, int z)
{
    int min;
    int max;
    if (x > y && x > z)
    {
        max = x;
    }
    else if (y > x && y > z)
    {
        max = y;
    }
    else
    {
        max = z;
    }
    //
    if (x < y && x < z)
    {
        min = x;
    }
    else if (y < x && y < z)
    {
        min = y;
    }
    else
    {
        min = z;
    }
    int middle;
    //
    if (x != min && x != max)
    {
        middle = x;
    }
    else if (y != min && y != max)
    {
        middle = y;
    }
    else
    {
        middle = z;
    }
    printf("%d\n %d\n %d\n", min, middle, max);
    printf("\n");
}
void nor(int x, int y, int z)
{
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    as(a, b, c);
    nor(a, b, c);
    return 0;
}