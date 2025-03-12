#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int small = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < small)
        {
            small = ar[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == small)
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

    return 0;
}