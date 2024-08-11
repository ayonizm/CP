#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ar[n];
    int count[m + 1];
    for (int i = 0; i <= m; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        count[ar[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}
