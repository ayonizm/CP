#include <stdio.h>
#include <string.h>
int main()
{
    char name[51];
    while (scanf("%s", &name) != EOF)
    {
        int x;
        scanf("%d", &x);
        int len = strlen(name);
        int count = 0;
        int rlen = 0;
        int wlen = 0;
        for (int i = 0; i < len; i++)
        {
            if (name[i] == 'R')
            {
                rlen++;
                if (rlen == x)
                {
                    count++;
                    rlen = 0;
                }
                else if (name[i + 1] == 'W')
                {
                    count++;
                    rlen = 0;
                }
                else if (name[i + 1] == '\0')
                {
                    count++;
                }
            }

            else if (name[i] == 'W')
            {
                wlen++;
            }
        }
        int sum = count + wlen;
        printf("%d\n", sum);
    }

    return 0;
}