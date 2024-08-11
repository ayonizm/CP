#include <stdio.h>

int main()
{

    char x;
    float ar[12][12];
    scanf(" %c", &x);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &ar[i][j]);
        }
    }
    float count = 0;
    float count1 = 0;

    for (int i = 0; i < 12; i++)
    {
        for (int f = 1+i; f < 12; f++)
        {
            count = count + ar[i][f];
            count1++;
        }
      
    }
    
   
    if (x == 'S')
    {
        printf("%.1f\n", count);
    }
    else if (x == 'M')
    {
        printf("%.1f\n", count / count1);
    }

    return 0;
}
