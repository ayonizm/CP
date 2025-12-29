#include <stdio.h>
#include <string.h>
int main()
{

    char s[1000];

    scanf("%s", &s);
    int diff = 'a' - 'A';
    int l = strlen(s);

    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
        {
            continue;
        }
        else
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                printf(".%c", s[i]);
            }
            else
            {
                s[i] = s[i] + diff;
                printf(".%c", s[i]);
            }
        }
    }

    return 0;
}