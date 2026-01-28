#include <stdio.h>
#include <string.h>
int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    double sub = y - x;
    double yo = (100.00 * sub) / x;
    printf("%.2lf%%\n", yo);

    return 0;
}