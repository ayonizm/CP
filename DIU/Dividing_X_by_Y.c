#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        float a, b;
        scanf("%f %f", &a, &b);
        if (b != 0.0)
        {
            printf("%.1f\n", a / b);
        }
        else
        {
            printf("divisao impossivel\n");
        }
    }

    return 0;
}