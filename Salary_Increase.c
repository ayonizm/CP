#include <stdio.h>
int main()
{
    double x;
    scanf("%lf", &x);
    if (x <= 400.00)
    {
        double sum = x + (x * 15.00) / 100;
        double dif = sum - x;
        printf("Novo salario: %.2lf\n", sum);
        printf("Reajuste ganho: %.2lf\n", dif);
        printf("Em percentual: 15 % %\n");
    }
    else if (x > 400.00 && x <= 800.00)
    {
        double sum = x + (x * 12.00) / 100;
        double dif = sum - x;
        printf("Novo salario: %.2lf\n", sum);
        printf("Reajuste ganho: %.2lf\n", dif);
        printf("Em percentual: 12 % %\n");
    }
    else if (x > 800.00 && x <= 1200.00)
    {
        double sum = x + (x * 10.00) / 100;
        double dif = sum - x;
        printf("Novo salario: %.2lf\n", sum);
        printf("Reajuste ganho: %.2lf\n", dif);
        printf("Em percentual: 10 % %\n");
    }
    else if (x > 1200.00 && x <= 2000.00)
    {
        double sum = x + (x * 7.00) / 100;
        double dif = sum - x;
        printf("Novo salario: %.2lf\n", sum);
        printf("Reajuste ganho: %.2lf\n", dif);
        printf("Em percentual: 7 % %\n");
    }
    else if (x > 2000.00)
    {
        double sum = x + (x * 4.00) / 100;
        double dif = sum - x;
        printf("Novo salario: %.2lf\n", sum);
        printf("Reajuste ganho: %.2lf\n", dif);
        printf("Em percentual: 4 % %\n");
    }

    return 0;
}