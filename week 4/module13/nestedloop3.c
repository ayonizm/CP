#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int number = 1;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        num[i] = number;
        number = number + 1;
    }
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d ",num[j]);
        }
        k++;
        printf("\n");
    }

    return 0;
}