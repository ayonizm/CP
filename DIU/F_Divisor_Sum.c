#include <stdio.h>
#include <string.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count = count + j;
            }
        }
    }
    printf("%d", count);

    return 0;
}