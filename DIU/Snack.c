#include <stdio.h>
int main()
{
    int x, ghorardim;
    double y, sum;
    scanf("%d %d", &x, &ghorardim);

    if (x == 1)
    {
        y = 4.00;
    }

    else if (x == 2)
    {
        y = 4.50;
    }
    else if (x == 3)
    {
        y = 5.00;
    }
    else if (x == 4)
    {
        y = 2.00;
    }

    else if (x == 5)
    {
        y = 4.50;
    }
    

    sum = y *ghorardim;

    printf("Total: R$ %.2lf\n", sum);
    return 0;
}