#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a < n; a++)
    {
        int this, that;
        scanf("%d", &this);
        int ar[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &ar[i]);
        }
        scanf("%d", &that);
        int count = 0;
        if ((this + that) == 7)
        {
            count++;
        }
        else
        {
            printf("NAO\n");
            continue;
        }
        if ((ar[0] + ar[2]) == 7)
        {
            count++;
        }
        else
        {
            printf("NAO\n");
            continue;
        }
        if ((ar[1] + ar[3]) == 7)
        {
            count++;
        }
        else
        {
            printf("NAO\n");
            continue;
        }

        if (count == 3)
        {
            printf("SIM\n");
        }
    }

    return 0;
}