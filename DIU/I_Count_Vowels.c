#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char name[250];
    fgets(name, 250, stdin);
    int len = strlen(name) - 1;
    for (int i = 0; i < len; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = tolower(name[i]);
        }
    }
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'o' || name[i] == 'i' || name[i] == 'u')
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}