#include <stdio.h>
void as(long long int x,long long int y,long long int z)
{
    long long int min;
    long long int max;
    if (x > y && x > z)
    {
        max = x;
    }
    else if (y > x && y > z)
    {
        max = y;
    }
    else
    {
        max = z;
    }

    if (x < y && x < z)
    {
        min = x;
    }
    else if (y < x && y < z)
    {
        min = y;
    }
    else
    {
        min = z;
    }
    long long int middle;

    if (x != min && x != max)
    {
        middle = x;
    }
    else if (y != min && y != max)
    {
        middle = y;
    }
    else
    {
        middle = z;
    }
    printf("%lld\n", min);
    printf("%lld\n", middle);
    printf("%lld\n", max);
    printf("\n");
}
void nor(long long int x,long long int y,long long int z)
{
    printf("%lld\n", x);
    printf("%lld\n", y);
    printf("%lld\n", z);
}
int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    as(a, b, c);
    nor(a, b, c);
    return 0;
}