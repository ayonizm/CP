#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int x, y, z;
    while (scanf("%d %d %d", &x, &y, &z) != EOF)
    {
        if (x == 0 && y == 0 & z == 0)
        {
            break;
        }

        int v = x * y * z;
        int a = cbrt(v);
        printf("%d\n", a);
    }

    return 0;
}