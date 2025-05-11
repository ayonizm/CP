#include <stdio.h>
#include <string.h>
int main()
{
    int n;

    while (1)
    {

        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        int cor = 0;
        int sum = 0;
        char prb[10], res[20];
        int min, crem = 0, irem = 0;
        int rem_c = 0;
        char c_check[n + 10];
        int ck = 1;
        int cal = 0;

        for (int j = 0; j < n; j++)
        {

            scanf("%c %d %s", &prb[j], &min, res);
            if (cal == 0)
            {
                c_check[0] = prb[j];
                // strcpy(c_check[0],prb[j]);
            }
            else
            {
                c_check[ck] = prb[j];
                // strcpy(c_check[ck],prb[j]);
            }

            if (res[0] == 'c')
            {
                cor++;
                sum = sum + min;
                crem++;
            }
            else
            {
                if (cal == 0)
                {
                    irem++;
                }
                else
                {
                    if (c_check[ck] == c_check[ck - 1])
                    {
                        irem++;
                    }
                    else
                    {
                        irem = 0;
                    }
                }
            }
            if (crem != 0)
            {
                sum = sum + 20 * irem;
                irem = 0;
                crem = 0;
            }
            ck++;
            cal++;
        }
        printf("%d %d\n", cor, sum);
    }
}