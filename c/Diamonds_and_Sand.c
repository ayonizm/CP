#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int k = 0; k < n; k++)
    {
        char name[1001];
        fgets(name, 1001, stdin);

        int x = strlen(name);
        if (name[0] == ' ')
        {
            printf("0\n");
            continue;
        }

        int count = 0;

        for (int i = 0; i < x; i++)
        {
            if (name[i] == '<')
            {
                for (int j = i + 1; j < x; j++)
                {
                    if (name[j] == '>')
                    {
                        count++;
                        name[j] = '.';
                        break;
                    }
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
