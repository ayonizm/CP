#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ar[n];
    long long int count = 0;
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }
    for (long long int i = 0; i < n; i++)
    {
        count = count + ar[i];
    }
    if (count < 0)
    {
        printf("%lld", count * (-1));
    }
    else
    {
        printf("%lld", count);
    }

    return 0;
}
