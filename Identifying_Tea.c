#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (n == ar[i])
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}