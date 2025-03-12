#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
    }
    int limit;
    scanf("%d", &limit);
    printf("A total of %d pkg dlvd\n", sum);
    printf("location with more that %d pkgs:\n", limit);
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > limit)
        {
            printf("Location %d: %d pkg\n", i + 1, ar[i]);
        }
    }

    return 0;
}