#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = n; i > 0; i--)
    {

        if ((i-1) % 2 != 0)
        {
            printf("%d ", ar[i - 1]);
        }
    }

    return 0;
}