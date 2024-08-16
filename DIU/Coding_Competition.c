#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int sum1 = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
        if (ar[i] % 3 == 0)
        {
            continue;
        }
        else
        {
            sum1 = sum1 + (ar[i] % 3);
        }
    }
    printf("%d\n", sum - sum1);

    return 0;
}