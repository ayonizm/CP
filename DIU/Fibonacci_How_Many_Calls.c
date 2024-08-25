#include <stdio.h>
int conut;

int fibonacci(int n)
{
    conut++;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int ayon, adam, i;
    scanf("%d", &ayon);
    for (i = 0; i < ayon; i++)
    {
        scanf("%d", &adam);
        conut = 0;
        printf("fib(%d) = %d calls = %d\n", adam, conut - 1, fibonacci(adam));
    }
    return 0;
}