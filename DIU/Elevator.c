#include <stdio.h>
#include <math.h>

int main()
{
    double l, c, r1, r2;
    while (scanf("%lf %lf %lf %lf", &l, &c, &r1, &r2) != EOF)
    {
        if (l == 0 || c == 0 || r1 == 0 || r2 == 0)
        {
            break;
        }

        if (2 * r1 > l || 2 * r1 > c || 2 * r2 > l || 2 * r2 > c)
        {
            printf("N\n");
            continue;
        }

        double dist_x = l - r1 - r2;
        double dist_y = c - r1 - r2;

        if (dist_x * dist_x + dist_y * dist_y >= (r1 + r2) * (r1 + r2))
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}
