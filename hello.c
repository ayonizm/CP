#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    fgets(name, 100, stdin);
    int x = strlen(name);
    printf("%s %d\n", name,x);


    return 0;
}