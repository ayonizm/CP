#include <stdio.h>
#include <string.h>
int main()
{
    char name1[21];
    char name2[21];
    scanf("%s", &name1);
    scanf("%s", &name2);
    int x = strcmp(name1, name2);
    if (x == 0)
    {
        printf("%s", name1);
    }
    else if (x > 0)
    {
        printf("%s", name2);
    }
    else if (x < 0)
    {
        printf("%s", name1);
    }

    return 0;
}