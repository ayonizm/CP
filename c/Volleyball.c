#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    float sum1 = 0;
    float sum2 = 0;
    float sum3 = 0;
    float sum4 = 0;
    float sum5 = 0;
    float sum6 = 0;
    for (int i = 0; i < n; i++)
    {
        char name[100];
        scanf("%s", name);
        float ar1[3];
        float ar2[3];
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &ar1[j]);
        }
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &ar2[j]);
        }
        for (int i = 0; i < 3; i++)
        {
            if (i == 0)
            {
                sum1 = sum1 + ar1[i];
            }
            else if (i == 1)
            {
                sum2 = sum2 + ar1[i];
            }
            else if (i == 2)
            {
                sum3 = sum3 + ar1[i];
            }
            if (i == 0)
            {
                sum4 = sum4 + ar2[i];
            }
            else if (i == 1)
            {
                sum5 = sum5 + ar2[i];
            }
            else if (i == 2)
            {
                sum6 = sum6 + ar2[i];
            }
        }
    }
    float a = sum4 / sum1 * 100;
    float b = sum5 / sum2 * 100;
    float c = sum6 / sum3 * 100;

    printf("Pontos de Saque: %.2f %%.\n", a);
    printf("Pontos de Bloqueio: %.2f %%.\n", b);
    printf("Pontos de Ataque: %.2f %%.\n", c);

    return 0;
}