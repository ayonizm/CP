#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, z, a, b, c;
    scanf("%d %d %d", &x, &y, &z);
    scanf("%d %d %d", &a, &b, &c);
    if (a <= x && b <= y && c <= z)
    {

        printf("0\n");
    }

    else if (a > x && b > y && c > z)
    {

        printf("%d\n", abs((a - x) + (b - y) + (c - z)));
    }
    else if (a < x && b > y && c > z)
    {
        printf("%d\n", abs((b - y) + (c - z)));
    }

    else if (a > x && b < y && c > z)
    {

        printf("%d\n", abs((a - x) + (c - z)));
    }
    else if (a > x && b > y && c < z)
    {

        printf("%d\n", abs((a - x) + (b - y)));
    }
    return 0;
}
