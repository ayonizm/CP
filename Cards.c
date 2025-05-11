#include <stdio.h>
int main()
{
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < 4; i++)
    {
        if (ar[i] < ar[i + 1])
        {
            count1++;
        }
        else if (ar[i] > ar[i + 1])
        {
            count2++;
        }
    }
    if (count1 == 4)
    {
        printf("C\n");
    }
    else if (count2 == 4)
    {
        printf("D\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}