#include <stdio.h>
#include <string.h>
int main()
{
    char name[10001];
    fgets(name, 10001, stdin);
    int x = strlen(name) - 1;
    int count = 0;

    if (x <= 80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}