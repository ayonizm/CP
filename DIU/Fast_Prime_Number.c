#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int a = 0; a < n; a++)
    {
        int temp;
        scanf("%d", &temp);

        int count = 0;
        for (int i = 1; i <= sqrt(temp); i++)
        {
            if (temp % i == 0)
            {
                count++;
                if (i != temp / i)
                {
                    count++;
                }
            }
            if (count > 2)
            {
                break;
            }
        }

        if (count == 2)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not Prime\n");
        }
    }

    return 0;
}
