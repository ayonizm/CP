#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long tri = (long long)pow(3, n);

    printf("%lld\n", tri);

    return 0;
}