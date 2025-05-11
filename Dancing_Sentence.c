#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[55];
    while (fgets(name, 55, stdin) != NULL)
    {
        int x = strlen(name);
        int count = 1;
        for (int i = 0; i < x; i++)
        {
            if ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z'))
            {
                if (count % 2 == 1)
                {
                    name[i] = toupper(name[i]);
                }
                else
                {
                    name[i] = tolower(name[i]);
                }
                count++;
            }
        }
        for (int i = 0; i < x; i++)
        {
            printf("%c", name[i]);
        }
    }
    return 0;
}
