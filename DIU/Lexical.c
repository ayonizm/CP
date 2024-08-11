#include <stdio.h>
#include <string.h>
int main()
{
    char name1[10001];
    char name2[10001];
    scanf("%s", &name1);
    scanf("%s", &name2);
    int v = strcmp(name1, name2);
    if (v == 0)
    {
        printf("%s\n", name1);
        printf("%s\n", name2);
    }
    else if (v > 0)
    {
        printf("%s\n", name2);

        printf("%s\n", name1);
    }
    else if (v < 0)
    {
        printf("%s\n", name1);

        printf("%s\n", name2);
    }

    return 0;
}