#include <stdio.h>
#include <string.h>
int main()
{
    int wide, length;
    scanf("%d %d", &wide, &length);
    int case1 = wide * length;
    int case2 = (wide - 1) * (length - 1);
    printf("%d\n", case1 + case2);
    int case3 = ((wide - 1) * 2) + ((length - 1) * 2);
    printf("%d\n", case3);

    return 0;
}