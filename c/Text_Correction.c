#include <stdio.h>
#include <string.h>
int main()
{
    char name[1000001];
    while (fgets(name, 1000001, stdin) != '\0')
    {
        int x = strlen(name);
        for (int i = 0; i < x; i++)
        {
            if (name[i] == ',' || name[i] == '.')
            {

                if (name[i - 1] == ' ')
                {

                    for (int j = i - 1; j < x; j++)
                    {
                        name[j] = name[j + 1];
                    }
     
                }
            }
        }
        printf("%s", name);
    }

    return 0;
}
