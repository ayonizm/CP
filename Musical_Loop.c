#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
        {
            break;
        }
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int count = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (ar[i - 1] > ar[i] && ar[i + 1] > ar[i] || ar[i - 1] < ar[i] && ar[i + 1] < ar[i])
            {
                count++;
            }
        }
        if (ar[n - 1] > ar[0] && ar[n - 1] > ar[n - 2] || ar[n - 1] < ar[0] && ar[n - 1] < ar[n - 2])
        {
            count++;
        }
        if (ar[1] > ar[0] && ar[n - 1] > ar[0] || ar[1] < ar[0] && ar[n - 1] < ar[0])
        {
            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}