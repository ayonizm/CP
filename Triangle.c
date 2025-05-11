#include <stdio.h>
int main()
{
    double x, y, z, trap, peri;
    scanf("%lf %lf %lf", &x, &y, &z);
    int count = 0;
    if (x + y > z && y + z > x && z + x > y)
    {
        count = 1;
    }
    else
    {
        count = 0;
    }

    if (count == 1)
    {
        peri = x + y + z;
        printf("Perimetro = %.1lf",peri);
    }
    else if (count == 0)
    {
        trap = .5 * (x + y) * z;
        printf("Area = %.1lf",trap);
    }

    return 0;
}