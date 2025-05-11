#include <stdio.h>
#include <string.h>
int main()
{

    while (1)
    {
        char name[1];
        char number[100];
        scanf("%s", name);
        scanf("%s", number);
        if (name[0] == '0' && number[0] == '0')
        {
            break;
        }
        int len = strlen(number);
        int pos = 0;
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (number[i] == '0' || number[i] == name[0])
            {
                count++;
                continue;
            }
            else
            {
                pos = i;
                break;
            }
        }
        if (count == len)
        {
            printf("0\n");
            continue;
        }

        for (int i = pos; i < len; i++)
        {
            if (number[i] >= '0' && number[i] <= '9' && number[i] != name[0])
            {
                printf("%c", number[i]);
            }
        }

        printf("\n");
    }

    return 0;
}