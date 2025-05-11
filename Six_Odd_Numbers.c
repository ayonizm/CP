#include <stdio.h>
int main()
{
    int x;
    int even = 0;
    int odd = 0;
    scanf("%d", &x);
    if (x % 2 == 0 || x == 0)
    {
        even++;
    }
    else
    {
        odd++;
    }

    if (even == 1)
    {
        for (int i = x + 1; i <= x + 11; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d\n", i);
            }
        }
    }
    if (odd == 1)
    {
        for (int i = x; i <= x + 10; i++)
        {
            if (i % 2 != 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}