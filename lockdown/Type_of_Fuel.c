#include <stdio.h>
int main()
{
    int x;
    int al = 0;
    int gas = 0;
    int dis = 0;
    printf("MUITO OBRIGADO\n");
    while (scanf("%d", &x) != EOF)
    {

        if (x < 1 || x > 4)
        {
            continue;
        }
        else
        {
            if (x == 1)
            {
                al++;
            }
            else if (x == 2)
            {
                gas++;
            }
            else if (x == 3)
            {
                dis++;
            }
            else if (x == 4)
            {
                break;
            }
        }
    }
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",dis);
    return 0;
}