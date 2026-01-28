#include <stdio.h>
int main()
{
    double a, r;
    scanf("%lf", &a);
    if(a==0.0){
        printf("BAD LUCK\n");
        return 0;
    }
    r = a / 2.0;
    a *= a;
    double p = 3.1416 * r * r;
    printf("%.2lf\n", a - p);
    return 0;
}