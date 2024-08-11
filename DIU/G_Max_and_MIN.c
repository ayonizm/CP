#include <stdio.h>
int min(int ar[], int x)
{
    int min = ar[0];
    for (int i = 0; i < x; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    return min;
}
int max(int ar[], int x)
{
    int max = ar[0];
    for (int i = 0; i < x; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    return max;
}
int main()
{
    int x;
    scanf("%d", &x);
    int ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("%d %d",min(ar,x),max(ar,x));

    return 0;
}