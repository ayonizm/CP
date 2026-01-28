#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    double pi = 3.14159;
    double a;
    scanf("%lf", &a);
    double t = (sqrt(3.00) / 4.00) * a * a;
    double c = ((a * a * a) / (4.00 * t)) * ((a * a * a) / (4.00 * t)) * pi;
    double m = (c - t) / 3.00;
    double n = a / 2.00;
    double n1 = (n * n * pi) / 2.00;
    double f = n1 - m;
    printf("%.15lf\n", f * 3.00);
    return 0;
}