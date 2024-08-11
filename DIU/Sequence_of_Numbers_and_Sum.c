#include <stdio.h>
int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        long int count = 0;
        if (x <= 0 || y <= 0)
        {
            break;
        }

        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        for (int i = x; i <= y; i++)
        {
            count = count + i;
            printf("%d ", i);
        }
        printf("Sum=%ld\n", count);
    }
    return 0;
}
