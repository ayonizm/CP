#include <stdio.h>
int main()
{
    int x, pos,y;
    scanf("%d", &x);
    int ar[x + 1];
    scanf("%d", &pos);
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = x; i > pos; i--)
    {
        ar[i] = ar[i - 1];
    }
  
    ar[pos] = 100;
    for (int i = 0; i <= x; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}