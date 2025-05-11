#include <stdio.h>
int main()
{
    int x;
    int even = 0;
    int odd = 1;
    scanf("%d", &x);
    int ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (ar[i] % 2 == 0)
        {
            printf("%d\n", even);
        }
        else
        {
            printf("%d\n", odd);
        }
    }

    return 0;
}