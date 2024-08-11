#include <stdio.h>
int main()
{
    int x, pos;
    scanf("%d", &x);
    scanf("%d", &pos);
    int ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = pos; i < x; i++)
    {
        ar[i] = ar[i + 1];
    }
    for (int i = 0; i < x - 1; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}