#include <stdio.h>
#include <string.h>

long long int fac(long long int x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    long long int sum = x * fac(x - 1);
    return sum;
}

int main()
{
    long long int fact;
    scanf("%lld", &fact);
    printf("%lld", fac(fact));
    return 0;
}