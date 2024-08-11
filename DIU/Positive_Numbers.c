#include <stdio.h>
int main()
{
    int ar[6];
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        if (ar[i] >= 0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n", count);
    return 0;
}