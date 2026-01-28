#include <stdio.h>
#include <string.h>
int main()
{

    char s[1000];
    scanf("%s", &s);

    int ct = 0;
    int flag = 0;
    for (int i = 0; i < strlen(s)-1; i++)
    {
        if (s[i] == s[i + 1])
        {
            ct++;
            if (ct == 6)
            {
                
                break;
            }
        }
        if (s[i] != s[i + 1])
        {
            ct = 0;
        }
    }

    if (ct==6)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}
