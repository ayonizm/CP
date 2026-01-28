#include <stdio.h>
int main()
{
    float x[6];
    int count = 0;
    float y = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &x[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (x[i] > 0.00)
        {
            count++;
            y = y + x[i];
        }
    }
    float new = count;
    float sum = y / new;
    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum);

    return 0;
}