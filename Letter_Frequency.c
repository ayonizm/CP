#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        int count[26] = {0};
        char name[201];
        fgets(name, 201, stdin);
        int x = strlen(name);

        for (int j = 0; j < x; j++)
        {
            if (name[j] >= 'A' && name[j] <= 'Z')
            {
                count[name[j] - 'A']++;
            }
            else if (name[j] >= 'a' && name[j] <= 'z')
            {
                count[name[j] - 'a']++;
            }
        }

        int maxFreq = 0;
        for (int j = 0; j < 26; j++)
        {
            if (count[j] > maxFreq)
            {
                maxFreq = count[j];
            }
        }

        for (int j = 0; j < 26; j++)
        {
            if (count[j] == maxFreq)
            {
                printf("%c", j + 'a');
            }
        }

        printf("\n");
    }

    return 0;
}
