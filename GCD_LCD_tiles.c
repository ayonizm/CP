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
        int n1, n2;
        if (y >= z)
        {
            n1 = y;
            n2 = z;
        }
        else
        {
            n1 = z;
            n2 = y;
        }
        int rem;
        while (n2 != 0)
        {
            rem = n1 % n2;
            n1 = n2;
            n2 = rem;
        }
        int gcd = n1;
        int lcd = (y * z) / gcd;
        int hi1 = x / y;
        int hi2 = x / z;
        int hi3 = x / lcd;
        int sum = hi1 + hi2 - hi3;
        printf("%d\n", sum);
    }

    return 0;
}
