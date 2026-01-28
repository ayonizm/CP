#include <stdio.h>
#include <string.h>
int main()
{
    float dis, new;
    scanf("%f %f", &dis, &new);
    float left = 100.00 - dis;
    float ans = (100 / left) * new;
    printf("%.2f\n", ans);
    return 0;
}