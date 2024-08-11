#include <stdio.h>
#include <string.h>

int main()
{
    char a[11];
    char b[11];
    scanf("%s", a);
    scanf("%s", b);
    int a1 = strlen(a);
    int b1 = strlen(b);
    printf("%d ", a1);
    printf("%d\n", b1);
    printf("%s", a);
    printf("%s\n", b);
    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s ", a);
    printf("%s\n", b);

    return 0;
}