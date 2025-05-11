#include <stdio.h>

int main()
{
    int target;
    char x;
    float ar[12][12];
    scanf("%d", &target);
    scanf(" %c", &x);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &ar[i][j]);
        }
    }
    float count = 0;
    for (int i = 0; i < 12; i++)
    {
        count += ar[i][target];
    }
    
   
    if (x == 'S')
    {
        printf("%.1f\n", count);
    }
    else if (x == 'M')
    {
        printf("%.1f\n", count / 12.0);
    }

    return 0;
}
