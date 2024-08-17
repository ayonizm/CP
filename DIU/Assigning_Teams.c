#include <stdio.h>
#include <string.h>
int main()
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int x = x1 - y1;
    int y = x2 - y2;
    if (x < 0)
    {
        x = x * -1;
    }
    if (y < 0)
    {
        y = y * -1;
    }
    int ans = x - y;
    if (ans < 0)
    {
        ans = ans * -1;
    }
    printf("%d\n", ans);
    return 0;
}