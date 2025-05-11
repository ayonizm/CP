#include <stdio.h>
int main()
{
    double x;
    double sum = 0;
    int count = 0;
    while (scanf("%lf", &x) != EOF)
    {
        if (x < 0.0 || x > 10.0)
        {
            printf("nota invalida\n");
        }
        if (x >= 0.0 && x <= 10.0)
        {
            count++;
            sum = sum + x;
            if (count == 2)
            {
                printf("media = %.2lf\n", sum / 2.0);
                break;
            }
        }
    }

    return 0;
}