#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int ar[n];
    ar[0] = 0;
    ar[1] = 1;
    for (int i = 2; i < n; i++)
    {
        ar[i] = ar[i - 2] + ar[i - 1];
        sum = sum + ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    printf("the total sum is: %d", sum + 1);

    return 0;
}