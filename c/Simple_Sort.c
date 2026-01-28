#include <stdio.h>

int main()
{
    int a, b, c, min, max, mid;

    // Read the input values
    scanf("%d %d %d", &a, &b, &c);

    // Find the minimum, middle, and maximum values
    if (a <= b && a <= c)
    {
        min = a;
        if (b <= c)
        {
            mid = b;
            max = c;
        }
        else
        {
            mid = c;
            max = b;
        }
    }
    else if (b <= a && b <= c)
    {
        min = b;
        if (a <= c)
        {
            mid = a;
            max = c;
        }
        else
        {
            mid = c;
            max = a;
        }
    }
    else
    {
        min = c;
        if (a <= b)
        {
            mid = a;
            max = b;
        }
        else
        {
            mid = b;
            max = a;
        }
    }

    // Output the sorted values
    printf("%d\n", min);
    printf("%d\n", mid);
    printf("%d\n", max);

    return 0;
}
