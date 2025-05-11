#include <stdio.h>
#include <string.h>
int main()
{
    int jump, number;
    scanf("%d %d", &jump, &number);
    int ar[number];
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count = 0;
    int temp1 = ar[number - 2] - ar[number - 1];
    for (int i = 0; i < number - 1; i++)
    {
        int temp = ar[i] - ar[i + 1];
        if (temp < 0)
        {
            temp = temp * -1;
        }
        if (temp > jump)
        {
            printf("GAME OVER\n");
            break;
        }
        else
        {
            count++;
        }
    }
    if (temp1 > number)
    {
        printf("GAME OVER\n");
    }
    else
    {
        count++;
    }
    if (count == number)
    {
        printf("YOU WIN\n");
    }

    return 0;
}