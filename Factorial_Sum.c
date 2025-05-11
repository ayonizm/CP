#include <stdio.h>
long long fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        long long f = n * fac(n - 1);
        return f;
    }
}
int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        long long int sum = fac(x) + fac(y);
        printf("%lld\n", sum);
    }

    return 0;
}