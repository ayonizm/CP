#include <stdio.h>
int main()
{
    long long int x, y;
    long long int sum = 0;
    scanf("%lld %lld", &x, &y);
    for (long long int i = x; i <= y; i++)
    {
        if (i % 13 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%lld\n", sum);

    return 0;
}