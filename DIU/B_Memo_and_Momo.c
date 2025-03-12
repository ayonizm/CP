#include <stdio.h>
#include <string.h>
int main()
{
    long long int memo, momo, div;
    scanf("%lld %lld %lld", &memo, &momo, &div);
    if (memo % div == 0 && momo % div == 0)
    {
        printf("Both\n");
    }
    else if (memo % div == 0 && momo % div != 0)
    {
        printf("Memo\n");
    }
    else if (memo % div != 0 && momo % div == 0)
    {
        printf("Momo\n");
    }
    else if (memo % div != 0 && momo % div != 0)
    {
        printf("No one\n");
    }

    return 0;
}
