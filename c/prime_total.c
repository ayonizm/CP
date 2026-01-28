#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define SIZE_N 1000000

bool flag[SIZE_N + 1];
int primes[SIZE_N];

int sieve()
{
    int i, j, total = 0, val;

    for (i = 2; i <= SIZE_N; i++)
        flag[i] = true;

    val = sqrt(SIZE_N);
    for (i = 2; i <= val; i++)
    {
        if (flag[i])
        {
            for (j = i * i; j <= SIZE_N; j += i)
                flag[j] = false;
        }
    }

    for (i = 2; i <= SIZE_N; i++)
    {
        if (flag[i])
            primes[total++] = i;
    }
    return total;
}

int main()
{
    int total = sieve();
    printf("Total Primes: %d\n", total);
    for (int i = 0; i < total; i++)
        printf("%d\n", primes[i]);
    return 0;
}
