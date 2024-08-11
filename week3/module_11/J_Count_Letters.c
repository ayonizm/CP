#include <stdio.h>
#include <string.h>
int main()
{
    char name[1000001];
    fgets(name, 1000001, stdin);
    int x = strlen(name);
    int count[27] = {0};
    for (int i = 0; i < x; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            count[name[i] - 'a']++;
        }
    }
    for (int i = 0; i < 27; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}