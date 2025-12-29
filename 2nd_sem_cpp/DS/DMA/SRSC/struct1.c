#include<stdio.h>
#include<string.h>
struct code
{
    int p;
    char c;
    struct code *ptr;
};

int main()
{
    struct code var1;
    struct code var2;
    var1.p = 1;
    var1.c = 'a';
    var1.ptr = NULL;

    var2.p = 2;
    var2.c = 'b';
    var2.ptr = NULL;

    var1.ptr = &var2;
    printf("%d %c\n\n", var1.p, var1.c);
    printf("%d %c\n\n", var2.p, var2.c);
    printf("%d %c\n\n", var1.ptr->p, var1.ptr->c);
    return 0;
}