#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
        {
            break;
        }

        char name[n];
        scanf("%s", name);
        int len = strlen(name);
        int countD = 0;
        int countE = 0;
        for (int i = 0; i < len; i++)
        {
            if (name[i] == 'D')
            {
                countD++;
            }
            else if (name[i] == 'E')
            {
                countE++;
            }
        }
        int count = countD - countE;

        int hello = count % 4;
        if (hello == 1 || hello == -3)
        {
            printf("L\n");
        }
        else if (hello == 2 || hello == -2)
        {
            printf("S\n");
        }
        else if (hello == 3 || hello == -1)
        {
            printf("O\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}