#include <stdio.h>
int main()
{
    int x, high = 0;
    int high_index, low_index;
    scanf("%d", &x);
    int ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (ar[i] > high)
        {
            high = ar[i];
        }
    }
    int low = ar[0];
    for (int i = 0; i < x; i++)
    {
        if (ar[i] < low)
        {
            low = ar[i];
        }
    }

    for (int i = 0; i < x; i++)
    {
        if (ar[i] == high)
        {
            high_index = i;
        }
        else if (ar[i] == low)
        {
            low_index = i;
        }
    }
    int temp = 0;
    temp = ar[low_index];
    ar[low_index] = ar[high_index];
    ar[high_index] = temp;

    for (int i = 0; i < x; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}