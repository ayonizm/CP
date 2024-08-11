#include <stdio.h>
int main()
{
    int x[5];
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < 5; i++)
    {

        if (x[i] % 2 == 0 || x[i] == 0)
        {
            count++;
        }
    }

    printf("%d valores pares\n", count);

    return 0;
}