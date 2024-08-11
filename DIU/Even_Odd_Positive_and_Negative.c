#include <stdio.h>
int main()
{
    int x[5];
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (x[i] == 0)
        {
            even++;
        }
        else if (x[i] > 0)
        {
            pos++;
            if (x[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else if (x[i] < 0)
        {
            neg++;
            if (x[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);

    return 0;
}