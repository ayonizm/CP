#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int k = 0; k < n; k++)
    {
        char name[1001];
        scanf("%s", &name);
        int x = strlen(name);
        int count = 0;

        for (int i = 0; i < x - 1; i++)
        {
            if (name[i] == '<')
            {
                for (int j = i + 1; j < x; j++)
                {
                    if (name[j] == '<')
                    {
                        break;
                    }
                    else if (name[j] == '>')
                    {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}