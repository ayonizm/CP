#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, a, n;
    char s[10000];
    char uc[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lc[26] = "abcdefghijklmnopqrstuvwxyz";
    while (1)
    {
        a = 0;
        n = 0;
        fgets(s, 51, stdin);
        s[strcspn(s, "\n")] = '\0';
        if (s[0] == '*')
            break;
        for (int i = 0; i < 26; i++)
        {
            if (s[n] == uc[i] || s[n] == lc[i])
            {
                t = i;
                break;
            }
            if (i == 25)
            {
                n++;
                i = 0;
            }
        }
        for (int i = n; i < strlen(s); i++)
        {
            if (s[i] == ' ')
            {
                if (s[i + 1] == uc[t] || s[i + 1] == lc[t] || s[i + 1] == ' ')
                {
                    a = 0;
                }
                else
                {
                    a = 1;
                    break;
                }
            }
        }
        if (a == 0)
        {
            printf("Y\n");
        }
        else if (a == 1)
        {
            printf("N\n");
        }
    }
}