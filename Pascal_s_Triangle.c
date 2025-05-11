#include <stdio.h>

int main()
{
    int tst, sum, num, i;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d", &num);
        for(i=0, sum=0; i<num; i++)
            sum += pow(2, i);
        printf("%d\n", sum);
    }
    return 0;
}