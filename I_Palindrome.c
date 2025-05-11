#include <stdio.h>
#include <string.h>
int main()
{
    char name[1020];
    scanf("%s", &name);
    int len = strlen(name);
    char copy[1020];
    strcpy(copy, name);

    for (int i = 0; i < len / 2; i++)
    {
        char temp = name[i];
        name[i] = name[len - i - 1];
        name[len - i - 1] = temp;
    }
    if (strcmp(copy, name) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}