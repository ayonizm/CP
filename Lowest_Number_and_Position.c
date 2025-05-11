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
    int small = ar[0];
    ar[0];
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < small)
        {
            small = ar[i];
        }
    }
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (small == ar[i])
        {
            pos = i;
        }
    }
    printf("Menor valor: %d\n", small);
    printf("Posicao: %d\n", pos);

    return 0;
}