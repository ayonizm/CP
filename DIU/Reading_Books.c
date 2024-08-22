#include <stdio.h>
#include <string.h>
int main()
{
    int x, y, z;
    while (scanf("%d %d %d", &x, &y, &z) != EOF)
    {
        if (x == 0 || y == 0 || z == 0)
        {
            break;
        }

        int ans = (y * (x * z)) / (z - x);
        if (ans == 1 || ans == 0)
        {

            printf("%d pagina\n", ans);
        }
        else
        {
            printf("%d paginas\n", ans);
        }
    }

    return 0;
}