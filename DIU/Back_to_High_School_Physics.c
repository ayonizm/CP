#include <stdio.h>
#include <string.h>
int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        int z = x * y * 2;
        printf("%d\n", z);
    }

    return 0;
}