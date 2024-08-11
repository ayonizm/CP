#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    scanf("%s", &name);
    int x = strlen(name);
    int count[26] = {0};
    for (int i = 0; i < x; i++)
    {
        int num = name[i] - 'a';
        count[num]++;
    }
    for (int i = 0; i < strlen(name); i++)
    {
        int num = name[i] - 'a';
        if (count[num] != 0)
        {
            printf("%c - %d\n", num + 'a', count[num]);
        }
        count[num] = 0;
    }
    

    return 0;
}