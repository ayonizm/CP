#include <stdio.h>
int main()
{
    float gucci = 10000;
    float levis = 5000;
    float something;
    float belt;
    float money;
    printf("tell me the amount = \n");
    scanf("%f", &money);
    float rt = money - gucci;
    if (money >= gucci)
    {
        if (money >= gucci && rt > 20000)
        {
            printf("gucci bag and belt");
        }
        else
        {
            printf("gucci bag");
        }
    }
    else if (money >= levis)
    {
        printf("levis bag\n");
    }
    else if (money < levis)
    {
        printf("something");
    }

    else
    {
        printf("fokinni");
    }

    return 0;
}