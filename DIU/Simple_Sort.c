#include <stdio.h>
int main()
{
    int number[3];
    int big, small, unknown;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &number[i]);
    }
    big = number[0];
    small = number[0];
    for (int i = 0; i < 3; i++)
    {
        if (number[i] > big)
        {
            big = number[i];
        }
        if (number[i] < small)
        {
            small = number[i];
        }
    }

    printf("%d\n", small);
    for (int i = 0; i < 3; i++)
    {
        if (number[i] != big && number[i] != small)
        {
            unknown = number[i];
        }
    }
    printf("%d\n", unknown);
    printf("%d\n", big);
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", number[i]);
    }

    return 0;
}