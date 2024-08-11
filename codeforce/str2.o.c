#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    int val = strcmp(a, b);
    // printf("%d", val);
    //    1 is for right(b) small
    //    -1 is for left(a) small
    //    0 is for same
    if (val==0)
    {
        printf("same\n");
    }
    else if (val>0)
    {
        printf("B is small\n");
    }
    else{
        printf("A is small\n");
    }

    return 0;
}