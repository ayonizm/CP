#include <stdio.h>
#include <string.h>
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
    char x[16];
    while (scanf("%s", &x) != EOF)
    {
        if (x[0] == '0')
        {
            break;
        }

        long long int sum = fac(strlen(x));
        printf("%lld\n", sum);
    }

    return 0;
}