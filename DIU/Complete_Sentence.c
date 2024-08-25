#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char name[1000];
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        int count[26] = {0};
        gets(name);
        int len = strlen(name);
        for (int j = 0; j < len; j++)
        {
            int temp = name[j] - 'a';
            if (temp >= 0 && temp <= 25)
            {
                count[temp]++;
            }
        }
        int num = 0;
        for (int j = 0; j < 26; j++)
        {
            if (count[j] > 0)
            {
                num++;
            }
        }
        if (num < 13)
        {
            printf("frase mal elaborada\n");
        }
        else if (num < 26 && num >= 13)
        {
            printf("frase quase completa\n");
        }
        else if (num == 26)
        {
            printf("frase completa\n");
        }
    }

    return 0;
}