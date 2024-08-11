#include <stdio.h>

int main()
{
    char x;
    double ar[12][12];
    scanf(" %c", &x);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &ar[i][j]);
        }
    }
    double count = 0.0;
    double count1 = 0.0;
    int k = 11;
    for (int i = 0; i < 12; i++)
    {
       for (int j = 0; j < k; j++)
       {
        count = count + ar[j][i];
        count1++;
       }
       k--;
    }
    
    if (x == 'S')
    {
        printf("%.1lf\n", count);
    }
    else if (x == 'M')
    {
        printf("%.1lf\n", count / count1);
    }

    return 0;
}
