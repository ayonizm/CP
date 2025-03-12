#include <stdio.h>
int main()
{
    int a, sum, sum1, sum2, sum3, sum4, sum5, sum6;
    scanf("%lf", &a);

    if (a > 100.00)
    {
        sum = a / 100;
        a = (a % 100) * 100.00;
    }
    // printf("%lf\n", a);

    if (a > 50.00)
    {
        sum1 = a / 50;
        a = (a % 50) * 50;
    }

    if (a > 20.00)
    {
        sum2 = a / 20;
        a = (a % 20) * 20;
    }

    if (a > 10.00)
    {
        sum3 = a / 10;
        a = (a % 10) * 10;
    }

    if (a > 5.00)
    {
        sum4 = a / 5;
        a = (a % 5) * 5;
    }

    if (a > 2.00)
    {
        sum5 = a / 2;
        a = (a % 2) * 2;
    }

    if (a > 1.00)
    {
        sum6 = a / 1;
        a = (a % 1) * 1;
    }

    printf("%d %d %d %d %d %d %d", sum, sum1, sum2, sum3, sum4, sum5, sum6);
    return 0;
}