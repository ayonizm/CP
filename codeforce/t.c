#include <stdio.h>
int main()
{
    int n;
    int x, v;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &x);
    scanf("%d", &v);
    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            ar[i] = v;
        }
    }
    for (int i = n; i > 0; i--)
    {
        printf("%d ", ar[i - 1]);
    }

    return 0;
}