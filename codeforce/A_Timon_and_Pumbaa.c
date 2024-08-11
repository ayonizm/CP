#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a - b;
    int zero = 0;
    if (sum>=0)
    {
        printf("%d\n", sum);
    }
    else{
        printf("%d\n",zero);
    }

    return 0;
}