#include <stdio.h>
#include <string.h>
#include <limits.h>
int great(int ar[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }
    int biggy = great(ar, n, i + 1);

    if (ar[i] > biggy)
    {
        return ar[i];
    }
    else
    {
        return biggy;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int big = great(ar, n, 0);
    printf("%d", big);
    return 0;
}