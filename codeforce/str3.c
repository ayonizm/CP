#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    strcat(a,b);
    // int x = strlen(a);
    //    int y = strlen(b);
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[x] = b[i];
    //     x++;
    // }

    printf("%s", a);

    return 0;
}
//    printf("%d",x);
// int j = 0;
// for (int i = x;i <=(x+y) ; i++)
// {
//     a[i]=b[j];
//     j++;

// }