#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int ar[x];
    ar[0] = 0;
    ar[1] = 1;
    for (int i = 2; i < x; i++)
    {
        ar[i] = ar[i - 2] + ar[i - 1];
    }
    for (int i = 0; i < x - 1; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("%d\n", ar[x - 1]);

    return 0;
}