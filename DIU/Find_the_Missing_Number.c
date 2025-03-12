#include <stdio.h>
#include <string.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    for (long long int a = 0; a < n; a++)
    {
        long long int num, x, y, z;
        scanf("%lld %lld %lld %lld", &num, &x, &y, &z);
        long long int multi = x * y * z;
        if (num % multi != 0)
        {
            printf("-1\n");
        }
        else
        {
            long long int temp = num / multi;
            printf("%lld\n", temp);
        }
    }

    return 0;
}
