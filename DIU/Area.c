#include <stdio.h>
int main()
{
    double x, y, z, pi = 3.14159;
    scanf("%lf %lf %lf", &x, &y, &z);
    double tri, cir, trap, quad, ret;
    tri = x * z * .50;
    cir = pi * z * z;
    trap = .50 * (x + y) * z;
    quad = y * y;
    ret = x * y;
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);
    return 0;
}