#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n][3];
    for (int i = 0; i < n; i++)
    {
        int x = i + 1;
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                ar[i][j] = x;
            }
            else if (j == 1)
            {
                ar[i][j] = x * x;
            }
            else if (j == 2)
            {
                ar[i][j] = x * x * x;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("%d\n",ar[i][2]);
        
    }

    return 0;
}