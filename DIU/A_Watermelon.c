#include <stdio.h>
#include <string.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    if (n % 2 == 0 && n > 2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}