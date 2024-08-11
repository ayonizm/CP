#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ar[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        int count1 = 0;
        for (int j = 0; j < b; j++)
        {
            if (ar[i][j] > 0)
            {
                count1++;
            }
        }
        if (count1 == b)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}