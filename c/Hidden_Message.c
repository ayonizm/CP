#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char name[100];
    for (int i = 0; i < n; i++)
    {
        fgets(name, 100, stdin);
        int len = strlen(name);
        int count1 = 0;
        char name1[10000];
        if (name[len - 1] == '\n')
        {
            name[len - 1] = '\0';
            len--;
        }
        for (int j = 0; j <= len; j++)
        {
            if (name[j] != ' ' && name[j] != '\0')
            {
                name1[count1] = name[j];
                count1++;
            }
            else if (name[j] == ' ' || name[j] == '\0')
            {
                if (count1 > 0)
                {
                    printf("%c", name1[0]);
                }

                count1 = 0;
            }
        }
        printf("\n");
    }

    return 0;
}
