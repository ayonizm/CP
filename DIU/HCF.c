#include <stdio.h>
int main()
{
    int a, b, x, hcf;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        x = b;
    }
    else
    {
        x = a;
    }
    for (int i = 0;; i++)
    {
        if (a % x == 0 && b % x == 0)
        {
            hcf = x;
            break;
        }
        x--;
    }
    printf("%d\n", hcf);

    return 0;
}