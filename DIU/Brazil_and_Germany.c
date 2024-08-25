#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long n;
    while (scanf("%lu", &n) == 1 && n != 0)
    {
        double avg_g = n / 90.0;
        int bra, gar;
        bra = floor(avg_g * 1);
        gar = ceil(avg_g * 7);

        printf("Brasil %d x Alemanha %d\n", bra, gar);
    }
    return 0;
}
