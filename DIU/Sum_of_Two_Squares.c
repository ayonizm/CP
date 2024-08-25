#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, s;
    int b;

    while (scanf("%d", &n) == 1)
    {
        b = 0;
        i = 0;
        j = (int)sqrt(n);

        while (j >= i)
        {
            s = i * i + j * j;

            if (s == n)
            {
                b = 1;
                break;
            }
            else if (s < n)
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        if (b == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
